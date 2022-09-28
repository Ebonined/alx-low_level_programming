/**
 * _putchar - print char
 * @c: char to print
 *
 * Return: int
 */
int _putchar(char c);

/**
 * _puts_recursion - print string recursively
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
