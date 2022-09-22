/**
 * leet - function to encode string
 * @str: string to be encoded
 *
 * Return: char*
 */

char *leet(char *str)
{
	char upper[] = "AEOTL";
	char lower[] = "aeotl";
	char number[] = "43071";
	int i = 0;
	int i2;

	while (*(str + i))
	{
		i2 = 0;
		while (*(upper + i2) && *(lower + i2))
		{
			if ((*(str + i) == *(upper + i2)) || (*(str + i) == *(lower + i2)))
			{
				*(str + i) = *(number + i2);
				break;
			}
			i2++;
		}
		i++;
	}

	return (str);
}
