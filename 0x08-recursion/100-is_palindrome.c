/**
 * _lenofstr - finds length of string
 * @st: string to check
 *
 * Return: length of string
 */
int _lenofstr(char *st)
{
	if (*st == '\0')
		return (0);
	else
		return (1 + _lenofstr(st + 1));
}

/**
 * _check - checks to see if a string is a palindrome
 * @i: index from initial
 * @l: index from last
 * @p: check for palindrome
 *
 * Return: int 1 if palindrome
 */
int _check(int i, int l, char *p)
{
	if (i >= l)
		return (1);
	else if (p[i] != p[l])
		return (0);
	else
		return (_check(i + 1, l - 1, p));
}

/**
 * is_palindrome - check or state if palindrome
 * @s: string to check
 *
 * Return: return int 1 if palindrome
 */
int is_palindrome(char *s)
{
	int n;

	n = _lenofstr(s) - 1;
	return (_check(0, n, s));
}
