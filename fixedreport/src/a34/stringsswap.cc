#include "main.h"

void stringsSwap(Strings &objectA, Strings &objectB)
{
    size_t storedSize = objectA.size();
    objectA.setSize(objectB.size());
    objectB.setSize(storedSize);
    
    char *storedArray = objectA.str();
    objectA.setStr(objectB.str());
    objectB.setStr(storedArray);
}
