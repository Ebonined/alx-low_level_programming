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
/**
 * more_numbers - head function
 */
void more_numbers(void)
{
	char num = 4;
	int line;

	for (line = 0; line < 10; line++)
	{
		_putchar('0');

		for (num = 0; num <= 14; num++)
		{
			if (num < 14)
			{
				print_int(num);
			}

			else
			{
				print_int(num);
				_putchar('\n');
			}
		}
	}
}
