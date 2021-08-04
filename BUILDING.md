# How to build
Tested on Ubuntu 20.04 amd64 + MinGW(i686-w64-mingw32) + WineHQ

## Build wxWidgets 3.0.2 for MinGW
1. Clone wxWidgets v3.0.2: `git clone https://github.com/wxWidgets/wxWidgets.git -b v3.0.2` (To speed up cloning, add `--depth=1`)
2. Configure: `./configure --prefix=/usr/local/i686-w64-mingw32 --host=i686-w64-mingw32 --enable-unicode --build=$(./config.guess) --disable-shared` (If you want to debug, add `--enable-debug --enable-debug_gdb`)
3. Build: `make -j$(nproc)`
4. (Optional) Install wxWidgets to system: `(sudo) make install`

## Build libmsstyle
1. `cd libmsstyle`
2. Edit `build.sh` if needed
2. Run `./build.sh`

## Build msstyleEditor
1. Build wxWidgets and libmsstyle (as above)
2. Change the value of `_WXCONFIG` in `build.sh` to the path of the `wx-config` command
3. Run `./build.sh`

To run or debug msstyleEditor, use wine and MinGW's gdb

P.S. When I build msstyleEditor using wxWidgets master(bdee83d5ffad820d738738888f57a3e5a7f9791a) or v3.1.5, it crashed with SIGSEGV.
     So I used v3.0.2 as described in `msstyleEditor/attribution.txt`.
