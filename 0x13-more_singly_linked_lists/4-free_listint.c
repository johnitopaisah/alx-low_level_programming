#include "lists.h"

/**
 * free_listint - function that free a listint_t list
 * @head: pointer to the head
 *
 * Return: Nothint
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
