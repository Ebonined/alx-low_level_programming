#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: filename to read
 * @letters: number of letters
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdo, fdr, fdw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	fdo = open(filename, O_RDONLY);
	fdr = read(fdo, buf, letters);
	fdw = write(STDOUT_FILENO, buf, fdr);

	if (fdo == -1 || fdr == -1 || fdw == -1 || fdr != fdw)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fdo);

	return (fdw);
}
