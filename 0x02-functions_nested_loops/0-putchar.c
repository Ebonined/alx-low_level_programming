/**
 * main - Entry point
 *
 * _putchar - printing function
 * @str: character to be printed
 *
 * Return: Always (0) Success
 */

/* function declaration */
void _putchar(char str);

int main(void)
{
	char str[] = "_putchar";
	int num;
	for (num=0; num<=7; num++)
	{
		_putchar(str[num]);
	}

	_putchar('\n');

	return (0);
}
