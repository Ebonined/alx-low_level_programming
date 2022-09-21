/**
 * _strncat - function to join two strings
 * @dest: destination string
 * @src: source string
 * @int: number of src to be concatenated to dest
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

	while ((*(dest + i) = *(src + j)))
	{
		if (j + 1 == n)
		{
			break;
		}

		i++;
		j++;

	}

	dest[i + 1] = '\0';
	
	
	return (dest);
}
