/**
 * _sqrt - find square root of n (check)
 * @init: initial guess number
 * @n: number to find square root
 *
 * Return: int
 */

int _sqrt(int init, int n)
{
	if (init * init == n)
	{
		return (init);
	}
	else if (init * init > n)
	{
		return (-1);
	}

	return (_sqrt(init + 1, n));

}

/**
 * _sqrt_recursion - find square root of n
 * @n: number to find square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt(2, n));
}
