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
	int ran, total, i, i2, diff, total2;

	srand(time(NULL));

	while (total < 2772)
	{
		ran = 33 + (rand() % 93);
		total += ran;
		if (total > 2772)
		{
			total -= ran;
			break;
		}
		password[i] = ran;
		i++;
	}

	password[i] = '\0';

	if (total != 2772)
	{
		diff = 2772 - total;
		i2 = 0;

		while (i2 < i)
		{
			if ((password[i2] + 1) <= 126)
			{
				password[i2] += 1;
				diff -= 1;
				if (diff == 0)
				{
					break;
				}
			}
			if (i2 == (i - 1) && diff != 0)
			{
				i2 = 0;
			}

			i2++;
		}

	}

	printf("%s\n", password);

	return (0);
}
