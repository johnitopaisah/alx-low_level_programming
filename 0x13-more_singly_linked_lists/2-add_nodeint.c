#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer to the pointer to the head
 * @n: the number to be added to the new node
 *
 * Return: address of the new node on success, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
