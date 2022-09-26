/**
 * _strpbrk - function to break with byte in accept is found
 * @s: string to search
 * @accept: acceptable char values
 *
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (0);
}
