/**
 * _putchar - print char
 * @c: value to print
 *
 * Return: int
 */
int _putchar(char c);

/**
 * print_chessboard - print chest board
 * @a: chestboard array
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	j = k = 0;
	i = 8;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
