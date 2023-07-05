#include "list.h"

/**
 * print_list - function that print all the element of a linked list
 * @h: pointer to the head node
 *
 * Return: Return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("-> [%u] %s\n", h->len, h->str);
		else
			printf("-> [0] %s\n", h->str);
		count++;
		h = h->next;
	}

	return (count);
}
