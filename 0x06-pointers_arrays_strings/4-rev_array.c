#include <stdio.h>

void reverse_array(int *a, int n)
{

	/* index number*/
	int i;
	int temp[200];
	int i2;

	for (i = (n - 1); i < n && i >= 0; i--)
	{
		i2 = n - 1 - i;
		temp[i2] = a[i];
	}
	
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
