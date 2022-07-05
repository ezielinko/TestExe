#include "writer.hpp"

void Writer::save(const std::string& data) {
        myFile << data << std::endl;
}