#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function to select and perform operation
 *
 * @argc: shell passed argument
 * @argv: shell passed pointer of point argument
 * Return: int
 */
int main(int argc, char **argv)
{
	int a, b, out;
	int (*fun)(int, int);
	char *s;

	if (argc != 4)
		exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	fun = get_op_func(s);

	out = fun(a, b);

	printf("%d\n", out);

	return (0);
}
