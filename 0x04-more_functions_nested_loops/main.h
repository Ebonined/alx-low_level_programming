#include <stdio.h>
#include <ctype.h>

int _putchar(char c);
void more_numbers(void);

int _isupper(int c)
{
	int num;

	if (isupper(c))
	{
		num = 1;
	}
	else
	{
		num = 0;
	}

	return (num);
}

int mul(int a, int b)
{
	int num = a * b;

	return (num);
}

void print_numbers(void)
{
	int num;

	for(num = 0; num <= 9; num++)
	{
		if (num < 9)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d\n", num);
		}
	}
}

void print_most_numbers(void)
{
	int num;

	for(num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		if (num < 9)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d\n", num);
		}
	}
}
