#include <stdio.h>
#include <ctype.h>

int _putchar(char c);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

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

/**
 * print_int - print integer function
 * @value: value in int
 */

void print_int(int value)
{
	if (value != 0)
	{
		print_int(value / 10);
		_putchar((value % 10) + '0');
	}
}

