#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of listint_t.
 * @h: list to print
 *
 * Return: count of element
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->data != '\0')
		{
			printf("%i\n", h->data);
		}

		h = h->next;
		count++;
	}
	return (count);
}
