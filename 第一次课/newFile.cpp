#include "newFile.h"

void CFile::print2(string str)
{
	printf(str.c_str());
	printf("+");
	printf(str.c_str());
	printf("\n");
}