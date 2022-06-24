#include "TextAdder.hpp"

TextAdder::TextAdder(const std::string &fileName) : myFile(fileName)  {
    myFile.open(fileName);
    if(myFile.is_open()) {
        std::cout << "File if open" << std::endl;
    } else {
        std::cout << "Error!" << std::endl;
    }
}

TextAdder::~TextAdder() {
    std::cout << "File closed!" << std::endl;
    myFile.close();
}

void TextAdder::write(const std::string &textToAdd) {
    std::stringstream ss;
    ss << textToAdd;
}
