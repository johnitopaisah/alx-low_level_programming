#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked node structure
 */
typedef struct linkint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* All the function prototypes  */
size_t print_listint(const listint_t *h);


#endif /* LISTS_H */
