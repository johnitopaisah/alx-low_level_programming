#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function to print the values of a linked list
 * @h: POinter to the head of the list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}
	return (nod);
}
