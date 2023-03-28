#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: pointer as the function parameter
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char *startpt = s;
	char *endpt = s;
	char store;

	while (*endpt != '\0')
	{
		endpt++;
	}
	endpt--;
	while (startpt < endpt)
	{
		store = *startpt;
		*startpt = *endpt;
		*endpt = store;
		startpt++;
		endpt--;
	}
}
