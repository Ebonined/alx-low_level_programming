#include <stdio.h>
#include <stdlib.h>

int to_int(char *s);
int is_str(char *s);

/**
 * main - function to add numbers from arguement
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: int
 */

int main(int argc __attribute__ ((unused)), char **argv)
{
	int sum = 0;
	int i = 1;


	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	while (*(argv + i))
	{
		if (is_str(*(argv + i)) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + to_int(*(argv + i));
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
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

/**
 * is_str - check if array is of only string
 * @s: string array to check
 *
 * Return: int 1 if string and 0 if all are digits
 */
int is_str(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57))
		{
			i++;
			continue;
		}
		if (*(s + i) < 48 || *(s + i) > 57)
		{
			return (1);
		}

		i++;
	}
	return (0);
}
