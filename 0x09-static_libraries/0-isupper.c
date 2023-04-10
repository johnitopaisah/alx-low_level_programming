#include "main.h"

/**
 * _isupper - Function that checks if a character is uppercase
 * @c: The integer value it receives
 *
 * Return: Return 1 if successful or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
