/**
 * _strcmp - compares two strings
 * @s1: left side string
 * @s2: right side string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}

	return ((*(s1 + i) -  *(s2 + i)));
}