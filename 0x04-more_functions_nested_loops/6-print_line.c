/**
 * _putchar - putchar function
 * @str: string
 */

void _putchar(char str);

/**
 * print_line - putchar function
 * @n: n times to be printed
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
			if (num == (n - 1))
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
