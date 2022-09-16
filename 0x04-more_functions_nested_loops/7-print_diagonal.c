/**
 * _putchar - putchar function
 * @str: string
 */

void _putchar(char str);

/**
 * print_diagonal - printing function
 * @n: n times to be printed
 */
void print_diagonal(int n)
{
	int num;
	int line = 1;
	int item;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (item = 0; item < line; item++)
			{
				if (item > 0)
				{
					_putchar(' ');
				}
				if (item == (line - 1))
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
