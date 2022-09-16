int _putchar(char c);
/**
 * print_int - print integer function
 * @value: value in int
 */
void print_int(int value);

/**
 * more_numbers - head function
 */
void more_numbers(void)
{
	char num = 4;
	int line;

	for (line = 0; line < 10; line++)
	{
		_putchar('0');

		for (num = 0; num <= 14; num++)
		{
			if (num < 14)
			{
				print_int(num);
			}

			else
			{
				print_int(num);
				_putchar('\n');
			}
		}
	}
}
