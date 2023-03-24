#include <ctype.h>
#include "main.h"

/**
 * _isupper - Function to check for Upper character
 * @c: Parameter for the function
 *
 * Return: Always return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
