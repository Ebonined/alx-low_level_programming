#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	long int firstn = 1;
	long int secondn = 2;
	long int sum;
	int num;

	printf("%ld, ", firstn);
	printf("%ld, ", secondn);

	for (num = 0; num < 96; num++)
	{
		sum = firstn + secondn;

		if (num < 95)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}

		firstn = secondn;
		secondn = sum;
	}

	return (0);
}
