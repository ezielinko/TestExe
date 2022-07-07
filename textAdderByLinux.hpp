#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include "writer.hpp"
#ifndef TESTEXERCISE_TEXTADDERBYLINUX_HPP
#define TESTEXERCISE_TEXTADDERBYLINUX_HPP

class TextAdderByLinux : public Writer {
private:
    int fd;
public:
    explicit TextAdderByLinux(char *fileName);
    void save(const char *toAdd) override;
    ~TextAdderByLinux();
};

#endif