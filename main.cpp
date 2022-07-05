#include <iostream>
#include "TextAdderBySTD.hpp"
#include "textAdderByLinux.hpp"

int main(int argc, char *argv[]) {
    int mode = strtol(argv[1], nullptr, 10);
    const std::string fileName(argv[2]);

        switch (mode) {
            case 1: {
                std::cout << "You choose Linux method." << std::endl;

                TextAdderByLinux LinuxTextAdder(argv[2]);
                for (int i = 3; i < argc; i++) {
                    LinuxTextAdder.save(dataToWrite);
                }
            }
                break;
            case 2: {
                std::cout << "You choose STD method." << std::endl;
                TextAdderBySTD STDTextAdder(argv[2]);
                for (int i = 3; i < argc; i++) {
                    STDTextAdder.write(argv[i]);
                }
            }
                break;
            default:
                std::cout << "Wrong arguments! :( ";
                std::cout << "Instructions how correctly run the program:\n" << std::endl;
                std::cout << "fileName.txt / program mode represent by int 1 or 2. "
                             "1 = Linux functions method, 2 = Standard library method / text to add. \n" << std::endl;
                std::cout << "TYPE WITHOUT SLASHES, its only to separate arguments! Just separate by space :)" << std::endl;
        }


    return 0;
}