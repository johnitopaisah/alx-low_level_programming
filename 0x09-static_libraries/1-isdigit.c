#include "main.h"

/**
 * _isdigit - function that check for digit 0 - 9
 * @c: the digit is receives
 *
 * Return: Return 1 if is digit or 0 otherwise
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
