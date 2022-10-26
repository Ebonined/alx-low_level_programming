#include "lists.h"

/**
 * add_nodeint - adds a new node ato the beginning of a listint_t
 * @head: new struct head
 * @n: int in head
 * Return: listint_t or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (n == 0)
	{
		new->data = 0;
	}
	new->data = n;
	new->next = *head;
	*head = new;
	return (*head);
}
