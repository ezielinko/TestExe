#include "writer.hpp"


void Writer::save(const std::string& data) {
    std::cout << "Base writer save function with type string arg" << std::endl;
}

void Writer::save(const char *toAdd) {
    std::cout << "Base writer save function with pointer to char array as arg" << std::endl;
}

Writer::Writer() {
    std::cout << "Create base writer" << std::endl;
}

Writer::~Writer(){
    std::cout << "Base writer destructor" << std::endl;
}
