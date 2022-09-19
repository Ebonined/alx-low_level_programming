#include <string.h>

/**
 * _putchar - Entry point function
 * @s: string variable
 */

void _putchar(char s);

/**
 * print_rev - Entry point function
 * @s: string variable
 */

void print_rev(char *s)
{
	int i;
	char *tmp;
	int len;

	tmp = s;
	len = strlen(tmp);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
