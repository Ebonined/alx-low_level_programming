#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integer
 *
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add two integer
 *
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - add two integer
 *
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add two integer
 *
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}

	printf("Error\n");
	exit(100);
}
/**
 * op_mod - add two integer
 *
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a - (b * (a / b)));
	}

	printf("Error\n");

	exit(100);
}
