#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int sum = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			if ((num1 * num2) > sum)
			{
				putchar(num1);
				putchar(num2);
				if (num1 < '9' || num2 < '9')
				{
					putchar(',');
					putchar(' ');
				}
				sum = num1 * num2;
			}
		}
	}

	putchar('\n');

	return (0);
}