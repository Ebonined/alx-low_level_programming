#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function to sum up numbers
 *
 * @n: count of numbers passed
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arrgs;
	int sum = 0;
	unsigned int i;

	va_start(arrgs, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arrgs, int);
	}
	va_end(arrgs);

	return (sum);
}
