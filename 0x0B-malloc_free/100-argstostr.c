#include <stdlib.h>

/**
 * argstostr - concatenate all argv of the program
 * @ac: total arguments
 * @av: pointer of pointer of argument
 *
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, i = 0;
	char *out;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			i++;
		i++;
	}
	i++;
	out = malloc(i * sizeof(char));
	if (out == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			out[c] = av[a][b];
			c++;
		}
		out[c] = '\n';
		c++;
	}
	out[c] = '\0';
	return (out);
}
