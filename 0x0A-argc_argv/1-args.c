#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function for argc and argv
 * @argc: arguement count
 * @argv: argurment variables arrays
 *
 * Return: int
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
