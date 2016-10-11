#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class Data
{
public:
    Data();
    ~Data();
    bool read();
    void display() const;

private:
    class DataImp;
    DataImp* d_pimpl;
};

#endif
