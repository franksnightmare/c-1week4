#include "main.ih"

int main(int argc, char **argv)
{
    Data *data = new Data();
    size_t count = 0;

    while (data->read())
    {
        cout << "Object " << ++count << ": ";
        data->display();
    }
    
    delete data;
}
