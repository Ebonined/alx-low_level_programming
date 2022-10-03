/**
 * _atoi - entry function
 * @s: str variable to convert
 * Return: integer converted.
 */
int _atoi(char *s)
{
	short chk;
	int i, neg, conv;

	i = neg = conv = 0;

	chk = 0;
	neg = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			conv *= 10;
			conv -= (s[i] - '0');
			chk = 1;
		}
		else if (chk == 1)
			break;
		i++;
	}
	conv *= neg;
	return (conv);
}
