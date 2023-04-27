#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: Pointer to pointer to the first element of the list
 * @str: String to be addd to the new element
 *
 * Return: The address of the new element, or NULL if if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str== NULL)
		return (NULL);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
