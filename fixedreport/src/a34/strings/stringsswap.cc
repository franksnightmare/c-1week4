#include "strings.ih"

static void Strings::stringsSwap(Strings &objectA, Strings &objectB)
{
    size_t storedSize = objectA.d_size;
    objectA.d_size = objectB.d_size;
    objectB.d_size = storedSize;
    
    char **storedArray = objectA.d_str;
    objectA.d_str = objectB.d_str;
    objectB.d_str = storedArray;
}
