#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - function to print array with function pointer
 * @array: array of int
 * @size: length or size of string
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
