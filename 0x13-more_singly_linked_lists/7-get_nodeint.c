#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - locate a given node of a lintint_t linked list
 * @head: A pointer to the head
 * @index: the index of the node ot locate
 *
 * Return: if the node does not exist - NULL. Otherwise, the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;


	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
