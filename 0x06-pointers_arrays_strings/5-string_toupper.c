/**
 * string_toupper - convert lower case to upper
 * @b: string to be changed
 *
 * Return: char *
 */

char *string_toupper(char *b)
{
	int i = 0;

	while (*(b + i))
	{
		if (b[i] >= 97 && b[i] <= 122)
		{
			b[i] = b[i] - 32;
		}
		i++;
	}
	b[i] = '\0';

	return (b);
}

