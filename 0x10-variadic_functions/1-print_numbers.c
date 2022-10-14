#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print number
 *
 * @separator: seperator
 * @n: count of items passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vlist);
}
