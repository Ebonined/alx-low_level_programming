/**
 * _putchar - print char
 * @str: string to be converted
 */
void _putchar(char str);

/**
 * print_square - print square
 * @size: size of square
 */
void print_square(int size)
{
	int l = size;
	int w = size;
	int numw;
	int numl;

	if (size > 0)
	{

		for (numl = 0; numl < l; numl++)
		{
			for (numw = 0; numw < w; numw++)
			{
				_putchar('#');
				if (numw == (w - 1))
				{
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
}

