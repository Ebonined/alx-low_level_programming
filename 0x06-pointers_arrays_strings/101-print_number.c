#include "main.h"
/**
 * print_number - print number function
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int rem;
	int mult = 10;

	if (n > 0)
	{
		while (n / mult >= 10)
		{
			mult *= 10;
		}
		while (mult >= 1)
		{
			rem = ((n / mult) % 10) + '0';
			_putchar(rem);
			mult /= 10;
		}
	}
	else if (n < 0)
	{
		n *= -1;
		while (n / mult >= 10)
		{
			mult *= 10;
		}
		rem = '-';
		while (mult >= 0)
		{
			_putchar(rem);
			if (mult == 0)
			{
				break;
			}
			rem = ((n / mult) % 10) + '0';
			mult /= 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
