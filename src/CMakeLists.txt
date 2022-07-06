add_subdirectory(parser)
add_subdirectory(type)
add_subdirectory(compiler)
add_subdirectory(entity)
add_subdirectory(exception)

add_executable(cflat main.cpp)
target_link_libraries(cflat antlr4-runtime parser )


