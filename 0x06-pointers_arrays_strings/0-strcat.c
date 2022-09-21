#include <string.h>

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

	int len = strlen(dest);
	int len2 = strlen(src);
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = dest[i];
	}
	for (i = 0; i < len2; i++)
	{
		dest[i + len] = src[i];
	}

	dest[i + len + 1] = '\0';

	return (dest);
}
