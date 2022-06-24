#include <iostream>
#include "TextAdder.hpp"

int main() {
    std::cout << "Just do it!" << std::endl;

    std::string fileName;
    std::cin >> fileName;

    TextAdder adding(fileName);


    return 0;
}
