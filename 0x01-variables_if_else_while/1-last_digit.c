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

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	sprintf(str, "%d", n);

	char lastchar = str[strlen(str)-1];

	int lastint = atoi(lastchar);

	printf("%c", str[3]);

	return (0);
}
