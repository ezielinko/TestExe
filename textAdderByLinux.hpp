#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#ifndef TESTEXERCISE_TEXTADDERBYLINUX_HPP
#define TESTEXERCISE_TEXTADDERBYLINUX_HPP

class TextAdderByLinux {
private:
    int fd;
public:
    explicit TextAdderByLinux(char *fileName);
    void writeByLinux(const char *toAdd);
    ~TextAdderByLinux();
};

#endif