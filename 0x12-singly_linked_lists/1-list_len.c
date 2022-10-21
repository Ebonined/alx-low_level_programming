#include <stdio.h>
#include "lists.h"

/**
 * list_len - get the length of h.
 * @h: link pointer to list
 * Return: total bodes.
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
