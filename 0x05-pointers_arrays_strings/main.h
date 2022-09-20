#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

/**
 * _atoi - str to int function
 * @s: str variable
 *
 * Return: always int
 */

int _atoi(char *s)
{
        int len = strlen(s);
        int i;
        int value;
        int valn;
        int i2 = 0;
        int chk1 = 1;
        int conv;
        char c[100];

        for (i = 0; i < len; i++)
        {
                value = s[i];

                if (value >= 48  && value <= 57 && chk1 == 1)
                {
                        valn = s[i - 1];
                        ++i2;
                        if (valn == 45 && !*c)
                        {
                                c[0] = '-';
                        }
                        c[i2] = s[i];
                }
                else if (*c && chk1 == 1)
                {
                        chk1 = 0;
                }
        }
        if (!c[0])
        {
                c[0] = ' ';
        }

        conv = atoi(c);

        return (conv);
}
