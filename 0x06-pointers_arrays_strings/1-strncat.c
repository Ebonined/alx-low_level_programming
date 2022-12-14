/**
 * _strncat - function to join two strings
 * @dest: destination string
 * @src: source string
 * @n: number of src to be concatenated to dest
 *
 * Return: char *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
	{
		i++;
	}

	if (n != 0)
	{
		while (*(src + j))
		{
			(*(dest + i) = *(src + j));
			i++;
			j++;

			if (j >= n)
			{
				break;
			}
		}

		dest[i + 1] = '\0';
	}

	return (dest);
}
