#include <string.h>
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: variable
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp[20];

	for (i = (len - 1); i >= 0; i--)
	{
		tmp[(len - 1 - i)] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = tmp[i];
	}
}
