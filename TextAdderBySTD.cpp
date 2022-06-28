#include "TextAdderBySTD.hpp"

TextAdderBySTD::TextAdderBySTD(const std::string &fileName) : myFile(fileName, std::ios::app) {
    if (myFile.is_open()) {
        std::cout << "File if open" << std::endl;
    } else {
        std::cout << "Error!" << std::endl;
    }
}

void TextAdderBySTD::write(const std::string &toAdd) {
    myFile << toAdd << std::endl;
}

TextAdderBySTD::~TextAdderBySTD() {
    std::cout << "File closed!" << std::endl;
    myFile.close();
}