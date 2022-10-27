#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add list to end
 *
 * @head: head of the list
 * @n: value for appended list
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *buf;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	buf = malloc(sizeof(listint_t));

	if (buf == NULL || new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	buf = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (buf->next != NULL)
	{
		buf = buf->next;
	}

	buf->next = new;

	return (*head);
}
