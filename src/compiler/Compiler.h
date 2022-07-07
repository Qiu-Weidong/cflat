#ifndef CFLAT_COMPILER_COMPILER_H_
#define CFLAT_COMPILER_COMPILER_H_
#include <string>
#include <vector>

class Compiler {
    std::string version;
public :
    void build(const std::vector<std::string> & ) ;
    void compile(const std::string & );

    std::string getVersion() const { return version; }
    void setVersion(const std::string & version) { this->version = version; }
    
};

#endif // CFLAT_COMPILER_COMPILER_H_

