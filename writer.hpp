#include <iostream>
#include <fstream>
#ifndef TESTEXERCISE_WRITER_HPP
#define TESTEXERCISE_WRITER_HPP


class Writer {
private:
    std::fstream myFile;
public:

    virtual void save(const std::string& data);
};


#endif
