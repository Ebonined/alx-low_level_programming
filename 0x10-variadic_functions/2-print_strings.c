#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print string
 * @separator: string separator
 * @n: numbers of str to printS
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vlist;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
