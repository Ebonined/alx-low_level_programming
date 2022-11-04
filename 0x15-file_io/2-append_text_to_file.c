#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - append to an existing text filr
 *
 * @filename: filename
 * @text_content: text content to append
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + size))
		{
			size++;
		}
	}

	fdo = open(filename, O_WRONLY | O_APPEND);
	fdw = write(fdo, text_content, size);

	if (fdo == -1 || fdw == -1)
		return (-1);

	close(fdo);

	return (1);
}
