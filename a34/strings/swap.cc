#include "strings.ih"

void Strings::stringsSwap(Strings &objectA, Strings &objectB)
{
    char *tmp = objectA;
    objectA = objectB;
    objectB = tmp;
}

