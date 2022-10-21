#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct list_s - singly list
 * @str: string from malloc
 * @len: string length
 * @next: next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* _LISTS_H_ */
