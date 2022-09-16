/**
 * _putchar - print char
 * @str: string to be converted
 */
void _putchar(char str);
/**
 * print_triangle - print square
 * @size: size of square
 */
void print_triangle(int size)
{
	int l = size;
	int numl;
	int in;
	int i;

	if (size > 0)
	{

		for (numl = 1; numl <= l; numl++)
		{
			in = size - numl;

			for (i = 1; i <= in; i++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= numl; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
