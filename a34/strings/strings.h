#ifndef STRINGS_H
#define STRINGS_H

#include<iostream>

class Strings
{
	private:
		char **d_str;
		size_t d_size;
	
	public:
		Strings(int argc, char **argv);
		Strings(char **environ);
		
		size_t size();
		std::string at(size_t index);
		std::string const at(size_t index) const;
		
		void addString(std::string newString);
		void addString(char *charArray);
		void stringsSwap(Strings &objectA, Strings &objectB);
};

#endif
