#include <stdio.h>
#include <ctype.h>

int _islower(int c)
{
	int num;

	num = islower(c);
	if (num)
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return num;
}