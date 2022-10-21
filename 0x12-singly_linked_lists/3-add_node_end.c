#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _getlen - get length of string
 * @str: steing to find length
 *
 * Return: length in int type
 */
unsigned int _getlen(char *str)
{
	unsigned int i;

	while (*(str + i))
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds a new node to end of link list
 * @head: pointer of pointer to linked list
 * @str: string to be add to linked list
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnew, *temp;

	if (str == NULL)
		return (NULL);
	endnew = malloc(sizeof(list_t));
	if (endnew == NULL)
		return (NULL);
	endnew->str = strdup(str);

	if (endnew->str == NULL)
	{
		free(endnew);
		return (NULL);
	}
	endnew->len = _getlen(endnew->str);
	endnew->next = NULL;
	if (*head == NULL)
	{
		*head = endnew;
		return (endnew);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = endnew;
	return (endnew);
}
