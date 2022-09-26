/**
 * _strchr - find char in string
 * @s: string to be search
 * @c: char to find
 *
 * Return: char*
 */

char *_strchr(char *s, char c)
{
	char *o;
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}

	if (*(s + i) == c)
	{
		o = (s + i);
		return (o);
	}

	return (0);
}
