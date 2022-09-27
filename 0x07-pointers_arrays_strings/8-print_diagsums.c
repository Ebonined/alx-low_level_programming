#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal of square matrix
 * @a: the matrix variable
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, b, c, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		c = (i * size) + i;
		l += *(a + c);
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - 1 - b);
		r += *(a + c);
	}
	printf("%d, %d\n", l, r);
}
