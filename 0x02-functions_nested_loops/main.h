#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

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
		_putchar('0');
		num = 0;
	}

	return num;
}

int _abs(int c)
{
	int num;

	num = abs(c);

	return num;
}

int print_last_digit(int c)
{
	char str[100];
	char laststr[100];
	char lastint;

	sprintf(str, "%d", c);
	laststr[0] = str[strlen(str) - 1];
	lastint = atoi(laststr);

	_putchar(laststr[0]);

	return lastint;
}

void jack_bauer(void)
{
	int hr, hr2, min, min2;

	for (hr = '0'; hr <= '2'; hr++)
	{
		for (hr2 = '0'; hr2 <= '9'; hr2++)
		{
			for (min = '0'; min <= '5'; min++)
			{
				for (min2 = '0'; min2 <= '9'; min2++)
				{
					if (hr <= '2' && hr2 <= '3' && hr <= 5 && hr2 <= '9')

						_putchar(hr);
						_putchar(hr2);
						_putchar(':');
						_putchar(min);
						_putchar(min2);
						if (hr != '2' || hr2 != '2' || hr != 5 || hr2 != '9')
						{
						_putchar('\n');
						}
				}
			}
		}
	}

	_putchar('\n');
}
