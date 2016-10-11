#include "strings.ih"

void Strings::addString(char *charArray)
{
	size_t len = strlen(charArray) + 1;
	addCapacity(len);
	
	for (size_t index = 0; index != len; ++index)
		d_str[d_size + index] = charArray[index];
	
	d_size += len;
}
