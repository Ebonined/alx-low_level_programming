#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 5) == 0 && num == 100)
		{
			printf("buzz");
		}
		else if ((num % 5) != 0 && (num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0 && (num % 3) != 0)
		{
			printf("buzz ");
		}
		else if ((num % 5) == 0 && (num % 3) == 0)
		{
			printf("Fizzbuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");

	return (0);
}
