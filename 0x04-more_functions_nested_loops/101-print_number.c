/**
 * _putchar - putchar function
 * @str: input string
 */
void _putchar(char str);

/**
 * print_intl - print integer function
 * @n: value in int
 */

void print_intl(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_intl(n / 10);
		_putchar((n % 10) + '0');
	}
	else if (n > 0)
	{
		print_intl(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
 * print_number - print integer function
 * @n: value in int
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_intl(n);
	}
}
