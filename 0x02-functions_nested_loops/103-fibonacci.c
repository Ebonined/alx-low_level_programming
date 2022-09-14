#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	long int intarr[100];
	long int tempnum;
	long int sum = 0;
	long int value;
	int index = 0;
	int lasti = 0;

	intarr[0] = 1;
	intarr[1] = 2;

	while (1)
	{
		tempnum = intarr[index] + intarr[index + 1];
		if (tempnum < 4000000)
		{
			intarr[index + 2] = tempnum;
			lasti = index;
		}
		else
		{
			break;
		}
		index++;
	}

	lasti = lasti + 2;

	for (index = 0; index <= lasti; index++)
	{
		value = intarr[index];
		if (value % 2 == 0)
		{
			sum = sum + value;
		}
	}

	printf("%ld\n", sum);

	return (0);
}

