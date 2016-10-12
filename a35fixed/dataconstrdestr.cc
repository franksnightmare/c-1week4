#include "data.ih"

Data::Data()
{
    d_pimpl = new DataImp();
}

Data::~Data()
{
    delete d_pimpl;
}
