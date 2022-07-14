#include "Compiler.h"

int main(int argc, const char ** argv) {


    std::cout << "start cflat..." << std::endl;

    std::vector<std::string> sourceFiles;
    // for(const auto & file : InputFiles) sourceFiles.push_back(file);
    for(int i=1; i<argc; i++) sourceFiles.push_back(argv[i]);

    
    Compiler compiler;
    compiler.build(sourceFiles);

    std::cout << "build success!" << std::endl;

    return 0;

}

