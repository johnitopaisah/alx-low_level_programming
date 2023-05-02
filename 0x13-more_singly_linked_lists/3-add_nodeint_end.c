#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that add node to the end
 * @head: pointer to the head
 * @n: number to be added
 *
 * Return: return the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}

	return (node);
}
