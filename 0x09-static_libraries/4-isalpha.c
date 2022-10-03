#include <stdio.h>
#include <ctype.h>

int _isalpha(int c)
{
	int num;

	if (isalpha(c))
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	
	return num;
}
