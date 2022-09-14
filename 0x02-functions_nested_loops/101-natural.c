#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int num;
	int for3;
	int for5;
	int sum = 0;


	for (num = 0; num <= 1024; num++)
	{
		for3 = num % 3;
		for5 = num % 5;


		if (for3 == 0)
		{
			sum = sum + num;
		}
		else if (for5 == 0)
		{
			sum = sum + num;
		}

	}

	return sum;

}
