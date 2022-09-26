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
	int bool = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			bool = 1;
			break;
		}
		i++;
	}

	if (bool == 0)
	{
		return (0);
	}
	else
	{
		o = (s + i);
		return (o);
	}
}
