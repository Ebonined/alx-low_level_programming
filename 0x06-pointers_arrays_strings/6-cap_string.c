#include <stdio.h>

/**
 * cap_string - Capitalization function
 * @str: string input
 *
 * Return: char *
 */

char *cap_string(char *str)
{
	char *before = "\t \n,;.!?\"(){}";
	int i = 0;
	int i2 = 0;

	while (*(str + i))
	{
		if ((i == 0) && (*(str + i) >= 97 && *(str + i) <= 122))
		{
			*(str + i) = *(str + i) - 32;
		}
		else
		{
			i2 = 0;
			while (*(before + i2))
			{
				if ((*(str + i - 1) == *(before + i2))
				&& (*(str + i) >= 97 && *(str + i) <= 122))
				{
					*(str + i) = *(str + i) - 32;
				}
				i2++;
			}
		}

		i++;
	}

	return (str);
}
