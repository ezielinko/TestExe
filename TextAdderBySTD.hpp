#include <iostream>
#include <fstream>
#include "writer.hpp"

#ifndef TESTEXERCISE_TEXTADDERBYSTD_HPP
#define TESTEXERCISE_TEXTADDERBYSTD_HPP

class TextAdderBySTD : public Writer{
private:
    std::fstream myFile;
public:
    explicit TextAdderBySTD(const std::string &fileName);
    void write(const std::string& toAdd) override;
    ~TextAdderBySTD();
};
#endif