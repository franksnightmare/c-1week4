#include "main.h"
#include <typeinfo>

using namespace std;

void inv_identity(int (*row)[10])
{
	for (int (*rowNum)[10] = row; rowNum != row + 10; ++rowNum)
	{
		for (int *colPos = *rowNum, *rowPos = *row + (*rowNum - *row) / 10; colPos != *rowNum + 10; ++colPos, rowPos += 10) {
			*colPos = rowPos == colPos ? 0 : 1;
		}
	}
}
