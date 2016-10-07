#include "main.h"

using namespace std;

int main(int argc, char **argv)
{
	int square[10][10];
	int (*row)[10] = square;
	
	inv_identity(row);
}
