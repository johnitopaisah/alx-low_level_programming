#include "main.h"

/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y
 * @x: the base number of the power operation
 * @y: the exponential of the power operation
 *
 * Return: Return the result after raising x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
