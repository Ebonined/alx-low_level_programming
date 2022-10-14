#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * p_c - print a char
 * @a: to be printed
 *
 * Return: void
 */
void p_c(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * p_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void p_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * p_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void p_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void p_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", p_c},
		{"s", p_s},
		{"i", p_i},
		{"f", p_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
