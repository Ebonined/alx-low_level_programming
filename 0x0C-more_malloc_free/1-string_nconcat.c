#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat two strings based on the value of n
 * @n: number to concate from s2 to s1
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int i, lens1, lens2;

	i = lens1 = lens2 = 0;
	if (s1 == NULL)
	{
		lens1 = 0;
	}
	else
	{
		while (*(s1 + lens1))
		{
			lens1++;
		}
	}
	if (s2 == NULL)
	{
		lens2 = 0;
	}
	else
	{
		while (*(s2 + lens2) && lens2 < n)
		{
			lens2++;
		}
	}
	output = malloc(sizeof(*s1) * (lens1 + lens2) + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < (lens1 + lens2); i++)
	{
		if (s1 != NULL && i < lens1)
			output[i] = s1[i];
		else if (s2 != NULL && (i < (lens1 + lens2)))
			output[i] = s2[i - lens1];
	}
	output[i] = '\0';
	return (output);
}
