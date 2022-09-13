#include <stdio.h>

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
