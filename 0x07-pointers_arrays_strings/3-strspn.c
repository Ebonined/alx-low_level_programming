/**
 * _strspn - count bytes in string base on accept
 * @s: string to search
 * @accept: accept string
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int count;

	i = j = 0;
	while (*(s + i))
	{
		found = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				count += 1;
				found = 1;
			}
			if (found == 0)
			{
				break;
			}
		}
	}

	return (count);
}
