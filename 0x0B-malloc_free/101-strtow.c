#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * wordnum - get number of words in string
 * @str: string
 *
 * Return: int
 */
int wordnum(char *str)
{
	int i, out = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				out++;
		}
		else if (i == 0)
			out++;
	}
	out++;
	return (out);
}

/**
 * strtow - get words from string
 * @str: string
 *
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	int a, b, c, d, cnt = 0, wc = 0;
	char **out;

	if (str == NULL || *str == '\0')
		return (NULL);
	cnt = wordnum(str);
	if (cnt == 1)
		return (NULL);
	out = malloc(cnt * sizeof(*out));
	if (out == NULL)
		return (NULL);
	out[cnt - 1] = '\0';
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			out[wc] = (char *)malloc(b * sizeof(char));
			b--;
			if (out[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(out[c]);
				free(out[cnt - 1]);
				free(out);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				out[wc][d] = str[a + d];
			out[wc][d] = '\0';
			wc++;
			a += b;
		}
		else
			a++;
	}
	return (out);
}
