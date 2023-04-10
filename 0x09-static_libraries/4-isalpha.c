#include "main.h"

/**
 * _isalpha - function that checks for an alphabet
 * @c: the integer value
 *
 * Return: Return 1 if successful and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
