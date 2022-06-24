#include <iostream>
#include <fstream>
#include <sstream>

#ifndef TESTEXERCISE_TEXTADDER_HPP
#define TESTEXERCISE_TEXTADDER_HPP


class TextAdder {
private:
    std::string fileName;
    std::ofstream myFile;
public:
TextAdder(const std::string& fileName); // check why ide suggest to add expplicit
~TextAdder();
void write(const std::string &textToAdd);

};


#endif
