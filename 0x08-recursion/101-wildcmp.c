char *wildcard(char *st1, char *st2);

/**
 * test - check wildcard match
 * @st3: compared string
 * @st4: wildcard match to compare
 * @d1: check first spot
 * @d2: first spot in wildcard comparison
 *
 * Return: matched spot
 */
char *test(char *st3, char *st4, char *d1, char *d2)
{
	if (*st4 == '*' || (*st3 == '\0' && *st4 == '\0'))
		return (d1);
	else if (*st3 != *st4)
		return (wildcard(st3, d2));
	else
		return (test(st3 + 1, st4 + 1, d1, d2));
}
/**
 * wildcard - wildcards check
 * @st1: string compared to
 * @st2: string to check
 *
 * Return: char *
 */
char *wildcard(char *st1, char *st2)
{
	if (*st1 != *st2)
	{
		if (*st1 == '\0')
			return (0);
		return (wildcard(st1 + 1, st2));
	}
	return (test(st1 + 1, st2 + 1, st1, st2));
}

/**
 * wildcmp - Compares string with wildcard
 * @s1: main string
 * @s2: test string can contain *
 *
 * Return: int 1 is match or 0 if not match
 */
int wildcmp(char *s1, char *s2)
{
	char *post;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		post = wildcard(s1, s2 + 1);
		if (post == 0)
			return (0);
		return (wildcmp(post + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
