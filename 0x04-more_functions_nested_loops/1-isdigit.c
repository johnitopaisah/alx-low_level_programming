#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Function to check for digit 0 - 9
 * @c: Parameter for the function
 *
 * Return: Always return digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
