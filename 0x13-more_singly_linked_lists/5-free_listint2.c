#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a lintint list
 * @head: pointer to pointer to the first node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
