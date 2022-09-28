/**
 * _prime_check - check if number is a prime number
 * @n: number to check
 * @c: divisor
 *
 * Return: int
 */
int _prime_check(int c, int n)
{
	if ((n % c) == 0 && n != c)
	{
		return (0);
	}
	else if ((n % c) == 0 && n == c)
	{
		return (1);
	}

	return (_prime_check(c + 1, n));
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	return (_prime_check(3, n));
}
