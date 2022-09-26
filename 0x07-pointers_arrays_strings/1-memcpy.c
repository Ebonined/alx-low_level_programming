/**
 * _memcpy - copy frm src to dest
 * @dest: destination to move
 * @src: source from
 * @n: numbers to copy
 *
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
