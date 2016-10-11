#include "strings.ih"

char *Strings::at(size_t index)
{
	if (index >= d_size)
		return &string("null")[0];
	
	size_t stringPos = 0;
	size_t stringNumber = 0;
	while(true)
	{
		if (stringNumber == index)
			return d_str + stringPos;
		
		if (d_str[stringPos] == 0)
			++stringNumber;
		
		++stringPos;
	}
}
