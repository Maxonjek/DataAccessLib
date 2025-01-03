#ifndef DATAACCESS_H
#define DATAACCESS_H

#include "DataAccessInterface.h"

class DataAccess: public DataAccessInterface {
public:
    explicit DataAccess(char path);
    ~DataAccess() override;
    void open() override;
    void close() override;
    void read(char &buffer, size_t size) override;
    void write(const char &buffer, size_t size) override;
};
#endif //DATAACCESS_H
