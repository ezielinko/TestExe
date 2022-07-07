#include "TextAdderBySTD.hpp"

TextAdderBySTD::TextAdderBySTD(const std::string &fileName) : myFile(fileName, std::ios::app) {
    if (myFile.is_open()) {
        std::cout << "File is open" << std::endl;
    } else {
        std::cout << "Error!" << std::endl;
    }
}

void TextAdderBySTD::save(const std::string &toAdd) {
    myFile << toAdd << std::endl;
}

TextAdderBySTD::~TextAdderBySTD() {
    std::cout << "File closed!" << std::endl;
    myFile.close();
}