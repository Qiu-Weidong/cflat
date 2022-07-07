
aux_source_directory(parser PARSER_SRC)
aux_source_directory(compiler COMPILER_SRC)
aux_source_directory(entity ENTITY_SRC)
aux_source_directory(type TYPE_SRC)
aux_source_directory(exception EXCEPTION_SRC)

add_executable(cflat main.cpp ${PARSER_SRC} ${COMPILER_SRC} ${ENTITY_SRC} ${TYPE_SRC} ${EXCEPTION_SRC} )
target_link_libraries(cflat antlr4-runtime
    LLVMAnalysis LLVMSupport LLVMX86AsmParser LLVMX86CodeGen LLVMX86Desc LLVMX86Disassembler LLVMX86Info
)


