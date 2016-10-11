#include "strings.ih"

char const *Strings::at(size_t index) const
{
	if (index >= d_size)
		return "null";
	
	size_t stringsPos = 0;
	size_t stringNumber = 0;
	while(true)
	{
		if (stringNumber == index)
			return d_str + stringsPos;
		
		if (d_str[stringsPos] == 0)
			++stringNumber;
		
		++stringsPos;
	}
}
