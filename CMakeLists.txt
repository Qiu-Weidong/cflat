cmake_minimum_required(VERSION  3.15.0)


project(cflat LANGUAGES CXX)

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Using LLVM version ${LLVM_VERSION}")

# 添加antlr4
include_directories(
    "C:\\Program Files (x86)\\LIBANTLR4 4.9.3\\include\\antlr4-runtime"
    "${CMAKE_SOURCE_DIR}/src/parser"
    "${CMAKE_SOURCE_DIR}/src/type"
    "${CMAKE_SOURCE_DIR}/src/compiler"
    "${CMAKE_SOURCE_DIR}/src/entity"
    "${CMAKE_SOURCE_DIR}/src/exception"
    "${LLVM_INCLUDE_DIRS}"
)

link_directories(
    "C:\\Program Files (x86)\\LIBANTLR4 4.9.3\\lib"
    "${LLVM_LIBRARY_DIRS}"
)
add_subdirectory(src)
add_subdirectory(test)




