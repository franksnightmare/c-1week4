#include "data.ih"

bool Data::read()
{
    d_pimpl->read();
    return cin.good();
}

bool Data::DataImp::read()
{
        d_text.clear();
        cin >> d_value;
        return cin.good();
}
