#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point to generate random password
 *
 * Return: int
 */

int main(void)
{
	char password[101];
	int ran;
	int i;

	srand(time(NULL));

	while (i <= 101)
	{
		ran = rand() % 127;
		if (ran != 32)
		{
			password[i] = 33 + (rand() % 93);
			i++;
		}
	}
	password[i] = '\0';

	printf("%s\n", password);
}
