#include <string.h>

/**
 * _putchar - entry point
 * @s: variable
 */

void _putchar(char s);

/**
 * puts_half - entry point
 * @str: variable
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int half;
	int i;
	int nlast;

	if (len % 2 == 0)
	{
		half = len / 2;

		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		nlast = ((len - 1) / 2) + 1;

		for (i = nlast; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
