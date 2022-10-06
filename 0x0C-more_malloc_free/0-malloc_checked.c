#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to create pointer to array of given size
 * @b: array size
 *
 * Return: void pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);

	if (output == NULL)
	{
		exit(98)
	}

	return (output);
}
