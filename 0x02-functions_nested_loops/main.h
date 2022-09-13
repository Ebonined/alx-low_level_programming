#include <stdio.h>
#include <ctype.h>

void _putchar(char str);

void print_alphabet(void)
{
        char alpha;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
                _putchar(alpha);
        }

        _putchar('\n');
}

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
        	{
			_putchar(alpha);
		}
		
		_putchar('\n');
	}
}

int _islower(int c)
{
	int num;

	num = islower(c);
	if (num)
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return num;
}

int _isalpha(int c)
{
	int num;

	if (isalpha(c))
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	
	return num;
}

int print_sign(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else
	{
		_putchar("0");
		num = 0;
	}

	return num;
}

