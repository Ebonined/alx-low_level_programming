#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * str_concat - to jion to string into one
 * @s1: first string to join
 * @s2: second string to join
 *
 * Return: char *
 */

char *str_concat(char *s1, char *s2)
{
	char *out;
	int i, j, n;
	int s1isnull, s2isnull;

	s1isnull = s2isnull = 0;
	if (s1 == NULL)
		s1isnull = 1;
	if (s2 == NULL)
		s2isnull = 1;

	i = j = n = 0;
	if (!s1isnull)
	{
		while (*(s1 + i) && s1isnull != 1)
		{
			i++;
		}
	}
	if (!s2isnull)
	{
		while (*(s2 + j) && s2isnull != 1)
		{
			j++;
		}
	}
	out = malloc(sizeof(*s1) * (j + i) + 1);
	for (n = 0; n < (j + i + 1); n++)
	{
		if (n < i && !s1isnull)
		{
			out[n] = s1[n];
		}
		else if (n < (j + i) && !s2isnull)
		{
			out[n] = s2[(n + j) - (i + j)];
		}
	}

	out[n] = '\0';
	return (out);
}
