#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _strdup - makes copy of string
 * @str: takes in string
 *
 * Return: char *
 */

char *_strdup(char *str)
{
	int i = 0;
	char *out;

	while (*(str + i))
	{
		i++;
	}


	if (str == NULL)
	{
		return (NULL);
	}

	out = malloc(sizeof(*str) * i);

	if (out == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*(str + i))
	{
		out[i] = str[i];
		i++;
	}

	return (out);
}
