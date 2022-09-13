#include <stdio.h>

void _putchar(char str);
void print_alphabet(void);

void print_alphabet(void)
{
        char alpha;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
                _putchar(alpha);
        }

        _putchar('\n');
}
