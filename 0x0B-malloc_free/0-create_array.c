#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * create_array - to create array
 * @size: size of array to be created
 * @c: char to be created
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *out;

	if (size == 0)
	{
		return (NULL);
	}
	out =  malloc(sizeof(c) * size);

	if (out == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		out[i] = c;
	}

	return (out);
}
