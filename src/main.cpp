#include "Compiler.h"

// // 做個實驗
// class Base {
// protected:
//     virtual void show(std::ostream &os) const {
//         os << "Base" << std::endl;
//     }
// public:
//     friend std::ostream &operator<<(std::ostream &os, const Base &base) {
//         base.show(os);
//         return os;
//     }
// };

// class Derived : public Base {
// protected:
//     virtual void show(std::ostream &os) const override {
//         os << "Derived" << std::endl;
//     }
// };



int main(int argc, const char ** argv) {


    std::cout << "start cflat..." << std::endl;

    std::vector<std::string> sourceFiles;
    for(int i=1; i<argc; i++) sourceFiles.push_back(argv[i]);

    
    Compiler compiler;
    compiler.build(sourceFiles);

    std::cout << "build success!" << std::endl;






    // Derived derived;
    // std::cout << "variable: " << derived << std::endl;
    // Base * pBase = new Derived();
    // std::cout << "pointer:  " << *pBase << std::endl;

    return 0;

}

