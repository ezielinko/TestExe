#include <iostream>
#include <fstream>
#ifndef TESTEXERCISE_WRITER_HPP
#define TESTEXERCISE_WRITER_HPP


class Writer {
private:
    std::fstream myFile;
public:
    Writer();
    virtual void save(const std::string& data);
    virtual void save(const char *toAdd);
    ~Writer();
};


#endif
