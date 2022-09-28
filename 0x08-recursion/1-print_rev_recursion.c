/**
 * _putchar - print char
 * @c: char to print
 *
 * Return: int
 */
int _putchar(char c);

/**
 * _print_rev_recursion - print string reverse recursively
 * @s: string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
