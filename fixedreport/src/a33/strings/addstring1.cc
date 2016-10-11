#include "strings.ih"

void Strings::addString(string newString)
{
	size_t len = newString.length() + 1;
	addCapacity(len);
	
	for (size_t index = 0; index != len; ++index)
		d_str[d_size + index] = newString[index];
	
	d_size += len;
}
