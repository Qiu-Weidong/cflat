#include "Compiler.h"
// #include "llvm/Support/CommandLine.h"
// #include "llvm/Support/InitLLVM.h"
// #include "llvm/Support/raw_ostream.h"
// #include "llvm/Support/TargetSelect.h"
// #include "llvm/Target/TargetMachine.h"

// static llvm::cl::list<std::string>
//     InputFiles(llvm::cl::Positional,
//                llvm::cl::desc("<input-files>"));
// static llvm::cl::opt<std::string>
//     OutputFile("-o",
//                 llvm::cl::desc("<output-file>"));

int main(int argc, const char **argv) {
  // llvm::InitializeAllTargets();
  // llvm::InitializeAllTargetMCs();
  // llvm::InitializeAllAsmPrinters();
  // llvm::InitializeAllAsmParsers();

  // llvm::cl::ParseCommandLineOptions(argc, argv, "hello cflat world!");
  std::vector<std::string> sourceFiles;
  for (int i = 1; i < argc; i++)
    sourceFiles.push_back(argv[i]);

  std::cout << "start cflat..." << std::endl;

  // std::vector<std::string> sourceFiles;
  // for(const auto & file : InputFiles) sourceFiles.push_back(file);

  Compiler compiler;
  compiler.build(sourceFiles);

  std::cout << "build success!" << std::endl;
  return 0;
}
