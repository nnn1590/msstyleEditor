#!/usr/bin/env bash
set -eu +f

trap "kill 0" EXIT

rm -f *.dll *.exe *.o *.so *.a *.specs
rm -rf build/

#[[ -f 'updlist/updlist.vcproj' ]] && cd updlist

declare SPECS=''
declare OPT_A='-DUNICODE -D_UNICODE -municode'
declare _WINVER='0x0603'
declare _OUT=''
declare _SUFFIX="-win32"
declare _IFS_BACKUP="${IFS}"
declare _WXCONFIG='false'

for _PREFIX in 'x86_64-w64-mingw32-' 'i686-w64-mingw32-'; do
	[[ "${_PREFIX}" == 'x86_64-w64-mingw32-' ]] && continue  # Skip x86_64 build
	#[[ "${_PREFIX}" == 'i686-w64-mingw32-' ]] && continue  # Skip x86 build
	_WXCONFIG="/usr/local/${_PREFIX%-}/bin/wx-config"
	#_WXCONFIG="/path/to/wxWidgets/wx-config"  # Source tree of wxWidgets
	if ! command -v "${_WXCONFIG}" > /dev/null; then
		echo "ERROR: '${_WXCONFIG}': command not found" >62
		exit 1
	fi
	"${_PREFIX}g++${_SUFFIX}" -dumpspecs | sed -e 's/-lmsvcrt/-lmsvcr120/g' > "${_PREFIX}g++${_SUFFIX}.specs"
	set +u
	if [[ ! "x${1}X" == "xX" ]]; then
		SPECS='-specs='"${_PREFIX}g++${_SUFFIX}.specs"
	fi
	set -u
	IFS=$'\n'
	declare -a _FILES=($(grep 'ClCompile' msstyleEditor.vcxproj | grep -o '".*"' | sed -e 's/"//g'))
	declare -a _FILES_OBJ=("${_FILES[@]/.cpp/.o}")
	"${_PREFIX}windres" msstyleEditor.rc --output-format=coff -o "${_PREFIX}msstyleEditor${_SUFFIX}.res"
	_FILES_OBJ+=("${_PREFIX}msstyleEditor${_SUFFIX}.res")
	if [[ "${_PREFIX}" == 'x86_64-w64-mingw32-' ]]; then
	case "${_PREFIX}" in
		'x86_64-w64-mingw32-' ) _OUT="build/x86_64${_SUFFIX}"  ;;
		'i686-w64-mingw32-'   ) _OUT="build/x86${_SUFFIX}"     ;;
		*                     ) _OUT="build/unknown${_SUFFIX}" ;;
	esac
	IFS=''
	for i in "${_FILES[@]}"; do
		IFS="${_IFS_BACKUP}"
		"${_PREFIX}g++${_SUFFIX}" -g3 -c ${SPECS} $(${_WXCONFIG} --cxxflags) ${OPT_A} -D_WIN32_WINNT="${_WINVER}" -DWINVER="${_WINVER}" -std=c++11 -D_CRT_SECURE_NO_WARNINGS -static-libgcc -static-libstdc++ "${i}" -Wno-narrowing -I.. &
	done
	wait
	"${_PREFIX}g++${_SUFFIX}" -g3 -o msstyleEditor.exe ${SPECS} $(${_WXCONFIG} --cxxflags) ${OPT_A} -D_WIN32_WINNT="${_WINVER}" -DWINVER="${_WINVER}" -std=c++11 -D_CRT_SECURE_NO_WARNINGS -static -static-libgcc -static-libstdc++ "${_FILES_OBJ[@]}" -Wno-narrowing -L"../libmsstyle/${_OUT}" -lmsstyle $(${_WXCONFIG} --libs std,aui,propgrid)
	rm *.o
	mkdir build
	mkdir -v "${_OUT}"
	mv -v msstyleEditor.exe "${_OUT}"
	IFS="${_IFS_BACKUP}"
done
