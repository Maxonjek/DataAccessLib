#ifndef DATAACCESSINTERFACE_H
#define DATAACCESSINTERFACE_H


class DataAccessInterface
{
public:
    virtual ~DataAccessInterface() = default;
    virtual void open();
    virtual void close();
    virtual void read(char &buffer, size_t size);
    virtual void write(const char &buffer, size_t size);
};




#endif //DATAACCESSINTERFACE_H
