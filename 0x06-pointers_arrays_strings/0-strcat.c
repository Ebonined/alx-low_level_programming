/**
 * _strcat - function to join two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
