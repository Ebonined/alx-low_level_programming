#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min no. of change for an ammount.
 * @argc: number of arguments
 * @argv: argument vector of pointer
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int amnt, nchange = 0, ind, cloop;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	amnt = atoi(argv[1]);
	if (amnt <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (ind = 0; ind < 5; ind++)
		{
			cloop = amnt / change[ind];
			amnt -= cloop * change[ind];
			nchange += cloop;
			if (amnt == 0)
				break;
		}
	}
	printf("%d\n", nchange);
	return (0);
}