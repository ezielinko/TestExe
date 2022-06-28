#include <iostream>
#include <fstream>

#ifndef TESTEXERCISE_TEXTADDERBYSTD_HPP
#define TESTEXERCISE_TEXTADDERBYSTD_HPP

class TextAdderBySTD {
private:
    std::fstream myFile;
public:
    explicit TextAdderBySTD(const std::string &fileName);
    void write(const std::string& toAdd);
    ~TextAdderBySTD();
};
#endif