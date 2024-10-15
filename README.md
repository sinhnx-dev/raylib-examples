# raylib-examples
raylib for game developer examples

## Compile and run on Windows with MinGW
```
cmake -S . -B build -G "MinGW Makefiles"
cd ./build
cmake --build .
```
## Compile and run on Windows with VSC++
```
cmake -S . -B build -G "Visual Studio 17 2022"
cd ./build
cmake --build .
```
## Compile and run on macOS
```
cmake -S . -B build
cd ./build
cmake --build .
```