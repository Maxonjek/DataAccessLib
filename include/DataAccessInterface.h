#ifndef DATAACCESSINTERFACE_H
#define DATAACCESSINTERFACE_H

#include <cstdio>
#include <string>

class DataAccessInterface
{
public:
    virtual ~DataAccessInterface() = 0;
    virtual ssize_t read(uint8_t *buffer, size_t size)=0;
    virtual ssize_t write(const uint8_t *buffer, size_t size)=0;
    virtual void release()=0;
    virtual void initialize(const std::string &sourcePath)=0;
    virtual bool isOpened()=0;
};

#endif //DATAACCESSINTERFACE_H
