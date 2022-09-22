#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: left side string
 * @s2: right side string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int bool = 0;
	int output;

	while (*(s1 + i))
	{
		if (*(s1 + i) == *(s2 + i))
		{
			bool += 1;
		}

		i++;
	}

	if (bool < i)
	{
		if (*(s1 + 0) > *(s2 + 0))
		{
			output = 15;
		}
		else
		{
			output = -15;
		}
	}
	else if (bool == i)
	{
		output = 0;
	}

	return (output);
}
