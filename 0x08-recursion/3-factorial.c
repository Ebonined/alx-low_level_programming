/**
 * factorial - Find factorial of number
 * @n: number to find factorial
 *
 * Return: int
 */
int factorial(int n)
{
	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
