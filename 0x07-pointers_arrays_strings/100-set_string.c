#include <stdio.h>
/**
 * set_string - set string function
 * @s: string pointer to pointer to set from
 * @to: string pointer to move to
 */

void set_string(char **s, char *to)
{
    char a[100];

    *(a + 0) = **(s + 0);

    *to = a[0];
}