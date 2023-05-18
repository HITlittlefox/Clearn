cmake_minimum_required(VERSION 3.25)
project(Clearn C)

set(CMAKE_C_STANDARD 11)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexec-charset=GBK")

file(GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable(${exe} ${file})
    message(\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

#add_executable(test addtwonum/addtwonum.c addtwonum/test.c)

#add_executable(main externstorageclass/support.c externstorageclass/main.c)

#add_executable(Clearn floatStorageRange.c)
#
#add_executable(Clearn sizeoftype.c)
#
#add_executable(Clearn test.c)