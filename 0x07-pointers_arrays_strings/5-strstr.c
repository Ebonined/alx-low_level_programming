/**
 * lenstr - find lenght of array
 * @arr: array
 *
 * Return: int
 */

int lenstr(char *arr)
{
	int len, i;

	len = i = 0;
	for (i = 0; *(arr + i); i++)
	{
		len += 1;
	}

	return (len);
}

/**
 * _strstr - function to find substring in string
 * @haystack: string to find from
 * @needle: substring to find in string
 *
 * Return: char*
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, count;
	int len = lenstr(needle);
	int lenh = lenstr(haystack);

	j = k = count = 0;

	while (*(haystack + j))
	{
		if (((j + (len - 1)) < lenh) && (needle[0] == haystack[j]))
		{
			k = j;
			i = 0;
			while ((needle[i] == haystack[k]) &&
			(needle[i] != '\0' || haystack[k] != '\0'))
			{
				i += 1;
				k += 1;
				count += 1;
			}
			if (count == len)
			{
				return (haystack + j);
			}
		}
		j++;
	}

	return (0);
}
