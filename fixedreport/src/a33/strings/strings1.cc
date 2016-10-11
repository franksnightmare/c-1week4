#include "strings.ih"

Strings::Strings(int argc, char **argv)
{
	for (size_t index = 0; index != d_size; ++index)
		addString(argv[index]);
}
