cmake_minimum_required(VERSION  3.15.0)


project(cflat LANGUAGES CXX)

# 添加antlr4
include_directories("C:\\Program Files (x86)\\LIBANTLR4 4.9.3\\include\\antlr4-runtime")
link_directories("C:\\Program Files (x86)\\LIBANTLR4 4.9.3\\lib")


# add_executable(cflat main.cpp cflatParser.cpp cflatLexer.cpp)
# target_link_libraries(cflat antlr4-runtime)

# add_subdirectory(src)

# add_subdirectory(test)

# file(GLOB_RECURSE _sources *.cpp )
# file(GLOB _sources *.cpp )
aux_source_directory(. SRC_MAIN)
add_executable(cflat ${SRC_MAIN})
target_link_libraries(cflat antlr4-runtime)



