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

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		count++;
	}
	return (count);
}
