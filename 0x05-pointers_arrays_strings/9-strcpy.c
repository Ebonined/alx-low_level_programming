#include <string.h>

/**
 * _strcpy - Entry function
 * @dest: destination
 * @src: source
 *
 * Return: Always success
 */
char *_strcpy(char *dest, char *src)
{
	char *out;

	out = strcpy(dest, src);

	return (out);
}
