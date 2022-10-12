#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes_print - print program opcodes
 * @mainaddr: main functon address
 * @amtbytes: bytes to print
 *
 * Return: void
 */
void opcodes_print(char *mainaddr, int amtbytes)
{
	int i;

	for (i = 0; i < amtbytes; i++)
	{
		printf("%.2hhx", mainaddr[i]);

		if (i < amtbytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main function to print opcodes
 * @argc: number of argument passed
 * @argv: pointer of array of arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes_print((char *)&main, n);
	return (0);
}
