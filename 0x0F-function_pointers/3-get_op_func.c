#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Get the op func object
 *
 * @s: string containing operator
 * Return: int(*)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opr[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((*(opr + i)).op != NULL)
	{
		if (strcmp(s, (*(opr + i)).op) == 0)
			break;
		i++;
	}

	return ((*(opr + i)).f);
}
