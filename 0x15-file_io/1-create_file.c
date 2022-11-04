#include "main.h"
#include <stdlib.h>

/**
 * create_file - create a file and write to file
 *
 * @filename: filename to create
 * @text_content: text content to write to file
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fdw;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + size))
		{
			size++;
		}
	}

	fdo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fdw = write(fdo, text_content, size);

	if (fdo == -1 || fdw == -1)
	{
		return (-1);
	}

	close(fdo);

	return (1);
}
