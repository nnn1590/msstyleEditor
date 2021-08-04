#!/usr/bin/env bash
set -eu +f

trap "kill 0" EXIT

cd "$(cd "$(dirname "${BASH_SOURCE[0]:-${0}}")"; pwd)"

rm -f *.dll *.exe *.o *.so *.a *.specs
rm -rf build/

#[[ -f 'updlist/updlist.vcproj' ]] && cd updlist

declare SPECS=''
declare _OUT=''
declare _SUFFIX="-win32"
declare _IFS_BACKUP="${IFS}"

for _PREFIX in 'x86_64-w64-mingw32-' 'i686-w64-mingw32-'; do
	[[ "${_PREFIX}" == 'x86_64-w64-mingw32-' ]] && continue  # Skip x86_64 build
	#[[ "${_PREFIX}" == 'i686-w64-mingw32-' ]] && continue  # Skip x86 build
	"${_PREFIX}g++${_SUFFIX}" -dumpspecs | sed -e 's/-lmsvcrt/-lmsvcr120/g' > "${_PREFIX}g++${_SUFFIX}.specs"
	SPECS='-specs='"${_PREFIX}g++${_SUFFIX}.specs"
	IFS=$'\n'
	declare -a _FILES=($(grep 'ClCompile' libmsstyle.vcxproj | grep -o '".*"' | sed -e 's/"//g'))
	declare -a _FILES_OBJ=("${_FILES[@]/.cpp/.o}")
	IFS=''
	for i in "${_FILES[@]}"; do
		"${_PREFIX}g++${_SUFFIX}" -c ${SPECS} -D_WIN32_WINNT=0x0601 -DWINVER=0x0601 -std=c++11 -mwindows -D_CRT_SECURE_NO_WARNINGS -D_LIB -DUNICODE -D_UNICODE -municode -static-libgcc -static-libstdc++ "${i}" -Wno-narrowing &
	done
	wait
	"${_PREFIX}g++${_SUFFIX}" -o libmsstyle.dll ${SPECS} -D_WIN32_WINNT=0x0601 -DWINVER=0x0601 -std=c++11 -mwindows -D_CRT_SECURE_NO_WARNINGS -D_LIB -DUNICODE -D_UNICODE -municode -shared -static-libgcc -static-libstdc++ "${_FILES_OBJ[@]}" -Wno-narrowing
	"${_PREFIX}ar" r libmsstyle.a "${_FILES_OBJ[@]}"
	rm *.o
	mkdir build
	[[ "${_PREFIX}" == 'x86_64-w64-mingw32-' ]] && _OUT="build/x86_64${_SUFFIX}" || _OUT="build/x86${_SUFFIX}"
	mkdir -v "${_OUT}"
	mv -v libmsstyle.{a,dll} "${_OUT}"
	IFS="${_IFS_BACKUP}"
done
