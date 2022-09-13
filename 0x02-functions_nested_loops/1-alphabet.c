/**
 * main - Entry point
 *
 * print_alphabet - another variable
 *
 * _putchar - print char
 * @str: variable
 *
 * Return: Always (0) Success
 *
 */

void _putchar(char str);

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	return (0);
}

