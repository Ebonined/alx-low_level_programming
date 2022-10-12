#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function that takes in pointer to print name
 * @name: string to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *) = f;

	f_ptr(name);
}
