#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @data: integer
 * @next: points to the next node
 *
 * Description: singly list node
 */
typedef struct listint_s
{
	int data;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
