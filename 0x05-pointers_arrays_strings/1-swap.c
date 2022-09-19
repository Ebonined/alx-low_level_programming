/**
 * swap_int - Entry point
 * @a: variable one
 * @b: variable two
 *
 * Return: Always (0) Success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;

	*b = *a;
	*a = temp;
}
