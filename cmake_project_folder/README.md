# Example 2. A project with directories

http://derekmolloy.ie/hello-world-introductions-to-cmake/

```
user@pc:~/cmake_sample/student$ tree
 .
 |-- CMakeLists.txt
 |-- build
 |-- include
 |   \-- Student.h
 \-- src
     |-- Student.cpp
     \-- mainapp.cpp
```

CMakeLists.txt
```
cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

#Bring the headers, such as Student.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(testStudent ${SOURCES})
```

```
user@pc:~/cmake_sample/student$ cd build
user@pc:~/cmake_sample/student$ cmake ..
```
The build directory then contains the Makefile for the project, which correctly refers to the files in the src and include directories. The project can then be built from the build directory using the make command:
```
 user@pc:~/cmake_sample/student/build$ ls
 CMakeCache.txt CMakeFiles Makefile cmake_install.cmake
 user@pc:~/cmake_sample/student/build$ make
 …
 user@pc:~/cmake_sample/student/build$ ls
 CMakeCache.txt CMakeFiles Makefile cmake_install.cmake testStudent
 user@pc:~/cmake_sample/student/build$ ./testStudent
 A student with name Joe
 ```
 One nice feature of this approach is that all of the files related to the build process are within the build directory as illustrated by the tree utility output below
 ```
 user@pc:~/cmake_sample/student/build$ cd ..
 user@pc:~/cmake_sample/student$ tree
.
|-- CMakeLists.txt
|-- build
|   |-- CMakeCache.txt
|   |-- CMakeFiles
|   |   |-- CMakeCCompiler.cmake
|   |   |-- CMakeCXXCompiler.cmake
|   |   |-- CMakeDetermineCompilerABI_C.bin
|   |   |-- CMakeDetermineCompilerABI_CXX.bin
|   |   |-- CMakeDirectoryInformation.cmake
|   |   |-- CMakeOutput.log
|   |   |-- CMakeSystem.cmake
|   |   |-- CMakeTmp
...
```
To clean this project you can simply recursively delete all files/directories within the build directory, for example:
```
 user@pc:~/cmake_sample/student/build$ cd ..
 user@pc:~/cmake_sample/student$ rm -r build/*
 user@pc:~/cmake_sample/student$ tree
 .
 |-- CMakeLists.txt
 |-- build
 |-- include
 |   \-- Student.h
 \-- src
 .   |-- Student.cpp
 .   \-- mainapp.cpp
 3 directories, 4 files
```
