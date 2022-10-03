/**
 * _memset - main entry function
 * @s: buffer pointer
 * @b: constant byte
 * @n: n number of bytes to filled
 *
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
