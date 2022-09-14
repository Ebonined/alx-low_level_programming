#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	unsigned long int firstn = 1;
	unsigned long int secondn = 2;
	unsigned long int sum;
	int num;

	printf("%ld, ", firstn);
	printf("%ld, ", secondn);

	for (num = 0; num < 96; num++)
	{
		sum = firstn + secondn;

		if (num < 95)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}

		firstn = secondn;
		secondn = sum;
	}

	return (0);
}
