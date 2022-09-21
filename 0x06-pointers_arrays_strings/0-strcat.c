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
	char out[100];
	char *output = out;

	for (i = 0; i < len; i++)
	{
		out[i] = dest[i];
	}
	for (i = 0; i < len2; i++)
	{
		out[i + len] = src[i];
	}

	out[i + len + 1] = '\0';

	return (output);
}
