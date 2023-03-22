#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Function to check for alphabetic character.
 * @c: Parameter for _isalpha function
 *
 * Return: Return 1 if alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
