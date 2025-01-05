
#include <iostream>
#include "DataAccess.h"

DataAccess::DataAccess():opened(false) {
}

DataAccess::~DataAccess() {

}

ssize_t DataAccess::read(uint8_t *buffer, size_t size) {
    std::cerr << "Method \"read\" not implemented" << std::endl;
    return -1;
}

ssize_t DataAccess::write(const uint8_t *buffer, size_t size) {
    std::cerr << "method \"write\" not implemented" << std::endl;
    return -1;
}

