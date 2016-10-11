#include "strings.ih"

void Strings::addCapacity(size_t increment)
{
	char *n_str = new char [d_size + increment];
	
	for (size_t index = 0; index != d_size; ++index)
		n_str[index] = d_str[index];
	
	delete d_str;
	d_str = n_str;
}
