#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * alloc_grid - create and allocate grid
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: int **
 */

int **alloc_grid(int width, int height)
{
	int **out;
	int m, n, i;

	i = m = n = 0;

	if (width == 0 || height == 0)
		return (NULL);

	out = malloc(sizeof(*out) * height);

	if (out == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(sizeof(**out) * width);
	}

	while (m < height)
	{
		n = 0;
		while (n < width)
		{
			out[m][n] = 0;
			n++;
		}
		m++;
	}

	return (out);

}
