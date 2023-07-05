#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdio.h>

/**
 * struc list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LIST_H */
