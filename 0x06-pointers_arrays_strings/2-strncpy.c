/**
 * _strncpy - function to copy string
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of string value to copy
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
