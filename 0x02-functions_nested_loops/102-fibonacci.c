#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	long int intarr[50];
	long int tempnum;
	int index;

	intarr[0] = 1;
	intarr[1] = 2;

	printf("%ld, ", intarr[0]);
	printf("%ld, ", intarr[1]);

	for (index = 0; index <= 47; index++)
	{
		tempnum = intarr[index] + intarr[index + 1];
		intarr[index + 2] = tempnum;
		if (index < 47)
		{
			printf("%ld, ", tempnum);
		}
		else
		{
			printf("%ld\n", tempnum);
		}
	}

	return (0);
}
