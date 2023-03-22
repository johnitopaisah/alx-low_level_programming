#include <ctype.h>
#include "main.h"

/**
 * _islower - Function to check for lowercase
 *
 * Return: Return 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
