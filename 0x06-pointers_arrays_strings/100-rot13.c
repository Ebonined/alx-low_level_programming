/**
 * rot13 - function to encode string
 * @str: string to be encoded
 *
 * Return: char*
 */

char *rot13(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		while ((*(str + i) >= 65 && *(str + i) <= 90)
		|| (*(str + i) >= 97 && *(str + i) <= 122))
		{
			if ((*(str + i) >= 65 && *(str + i) <= 77)
			|| (*(str + i) >= 97 && *(str + i) <= 109))
			{
				*(str + i) += 13;
				break;
			}
			else
			{
				*(str + i) -= 13;
				break;
			}
		}
		i++;
	}

	return (str);
}
