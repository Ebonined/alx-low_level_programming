#include <stdio.h>

int main(void)
{
    char a[] = "209937";
    int i, count;
    int num = 0;
    int tent = 10;

    i = count = 0;

    while (*(a + i))
    {
        count++;
        i++;
    }
    
    for (i = 1; i < count - 1; i++)
    {
        tent *= 10;
    }

    return (0);

}