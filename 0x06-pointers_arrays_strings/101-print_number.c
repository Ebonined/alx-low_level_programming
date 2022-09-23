/**
 * _putchar - print char function
 * @c: char to print
 *
 * Return: int
 */
int _putchar(char c);

/**
 * print_number - print number function
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int rem;
	int rem2;
	int mult = 10;

	if (n > 0)
	{
		while (1)
		{
			if (n / mult < 10)
			{
				break;
			}
			mult *= 10;
		}

		while (mult >= 1)
		{
			rem2 = n / mult;
			rem = (rem2 % 10) + '0';
			_putchar(rem);
			mult /= 10;
		}
	}
	else if (n < 0)
	{
		n *= -1;
		while (1)
		{
			if (n / mult < 10)
			{
				break;
			}
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
			rem2 = n / mult;
			rem = (rem2 % 10) + '0';
			mult /= 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
