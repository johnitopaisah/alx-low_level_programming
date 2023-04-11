#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create array
 * @size: pointer to the size of the array
 * @c: character to fill the array
 *
 * Return: return character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);

}
