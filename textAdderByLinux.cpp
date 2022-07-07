#include "textAdderByLinux.hpp"

TextAdderByLinux::TextAdderByLinux(char *fileName) {
   fd = open(fileName, O_CREAT | O_APPEND | O_WRONLY, 0700);
   if(fd == -1){
       std::cout << "Failed to open and create!" << std::endl;
   } else {
       std::cout << "File is open!" << std::endl;
   }
}

void TextAdderByLinux::save(const char *toAdd) {
    const std::string toAddToString(toAdd);
    write(fd, toAdd, toAddToString.size());
    write(fd, "\n", 1);
}

TextAdderByLinux::~TextAdderByLinux() {
    close(fd);
    std::cout << "File Closed!" << std::endl;
}