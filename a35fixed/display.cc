#include "data.ih"

void Data::display() const
{
    d_pimpl->display();
}

void Data::DataImp::display() const
{
    cout << "value is: " << d_value << '\n';
}
