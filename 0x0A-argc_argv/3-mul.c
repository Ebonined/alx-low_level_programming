#include <stdio.h>
#include <stdlib.h>

int to_int(char *s);

/**
 * main - main function for argc and argv
 * @argc: arguement count
 * @argv: argurment variables arrays
 *
 * Return: int
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int num1, num2;

	if (argv[1] && argv[2])
	{
		num1 = to_int(argv[1]);
		num2 = to_int(argv[2]);

		printf("%d\n", (num1 * num2));
		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}

/**
 * to_int - convert char to int
 * @s: string to convert
 *
 * Return: int
 */
int to_int(char *s)
{
	int i = 0;
	int output = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign *= -1;
	}

	while (*(s + i))
	{
		if (s[i] == '-')
		{
			i++;
			continue;
		}
		output *= 10;
		output = output + (*(s + i) - '0');
		i++;
	}

	return (output * sign);
}
