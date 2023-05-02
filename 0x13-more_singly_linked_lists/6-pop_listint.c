#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node
 * @head: pointer to a pointer to the first node
 *
 * Return: the head node's data (n), 0 if it fails
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	size_t n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
