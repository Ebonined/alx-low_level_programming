#include <string.h>

/**
 * _strcpy - entry function
 * @dest: destination
 * @src: source
 */


char *_strcpy(char *dest, char *src)
{
	char *out;

	out = strcpy(dest, src);

	return (out);
}
