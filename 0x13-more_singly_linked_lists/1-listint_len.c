#include "lists.h"

/**
 * listint_len - gets number of element in a list
 * @h: linked list pointer
 *
 * Return: count of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
