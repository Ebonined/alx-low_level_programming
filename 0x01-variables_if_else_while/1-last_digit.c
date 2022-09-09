#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char str[100];
	char lastchar[1];
	int lastint;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	sprintf(str, "%d", n);

	lastchar[0] = str[strlen(str) - 1];

	lastint = atoi(lastchar);

	if (n < 0)
	{
		lastint = lastint * -1;
	}

	if (lastint > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastint);
	}
	else if (lastint == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastint);
	}
	else if (lastint < 6 && lastint != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastint);
	}

	return (0);
}
