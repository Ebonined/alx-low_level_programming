#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all element in list_t type
 * @h: pointer to start of list
 *
 * Return: number of item in list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
