#include <fstream>
#include "llvm/Support/WithColor.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Target/TargetMachine.h"

#include "antlr4-runtime.h"
#include "CflatLexer.h"
#include "CflatParser.h"
#include "CflatBaseListener.h"
#include "LibraryLoader.h"


void print_version(llvm::raw_ostream &os)
{
    os << "cflat 0.0.1\n" ;
    // exit(EXIT_SUCCESS);
}

static llvm::cl::list<std::string>
    InputFiles(llvm::cl::Positional,
               llvm::cl::desc("<input-files>"));

static llvm::cl::opt<std::string>
    MTriple("mtriple",
            llvm::cl::desc("Override target triple for module"));

static llvm::cl::opt<bool>
    EmitLLVM("emit-llvm",
             llvm::cl::desc("Emit IR code instead of assembler"),
             llvm::cl::init(false));

void compile(const std::string & filename) {
    std::fstream is(filename, std::ios_base::in);

    if(!is.is_open()) { std::cout << "fuck!!!" << std::endl; return ; }

    antlr4::ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);

    antlr4::tree::ParseTree * tree = parser.compilationUnit();
    std::cout << tree->toStringTree(&parser) << std::endl;

    // 遍历语法树 listener
    // antlr4::tree::ParseTreeWalker walker;
    // CflatBaseListener listener;
    // walker.walk(&listener, tree);
    
    // 遍历语法树 visitor
    // LibraryLoader visitor;
    // visitor.addLoadPath("./import");
    // visitor.visit(tree);



    // semantic分析
    // IR生成
}

int main(int argc, const char ** argv) {
    llvm::InitLLVM X(argc, argv);
    
    llvm::InitializeAllTargets();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmPrinters();
    llvm::InitializeAllAsmParsers();

    llvm::cl::AddExtraVersionPrinter(print_version);

    llvm::cl::ParseCommandLineOptions(argc, argv, "hello cflat world!");


    for (const auto &file : InputFiles)
    {
        compile(file);
    }

    std::cout << "build success!" << std::endl;
    return 0;

}

