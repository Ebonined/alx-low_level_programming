
#include <string.h>

/**
 * putchar - main entry function
 * @s: string variabke
 */
void _putchar(char s);


/**
 * puts2 - main entry function
 * @str: string variabke
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
