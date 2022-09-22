/**
 * rot13 - function to encode string
 * @str: string to be encoded
 *
 * Return: char*
 */

char *rot13(char *str)
{
	int i, j;
	char real[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (real[j] == *(str + i))
			{
				*(str + i) = rot13[j];
				break;
			}
		}
	}
	return (str);
}
