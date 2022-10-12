#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - function to go to string and compare with func pointer
 * @array: array of int to be compared
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
