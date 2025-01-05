#ifndef DATAACCESS_H
#define DATAACCESS_H

#include <cstdio>
#include "DataAccessInterface.h"

class DataAccess: public DataAccessInterface {
public:
    DataAccess();
    ~DataAccess() override;
    void release();
    void initialize(const std::string &sourcePath);
    bool isOpened();
    ssize_t read(uint8_t *buffer, size_t sride) override;
    ssize_t write(const uint8_t *buffer, size_t size)override;


protected:
    std::string accessPath;
    bool opened;
};
#endif //DATAACCESS_H
