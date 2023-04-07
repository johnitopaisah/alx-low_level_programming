#include "main.h"

/**
 * square_root - supporting function
 * @n: number to find the root
 * @r: guess root
 *
 * Return: Return the actual root
 */
int square_root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r >= (n / 2))
	{
		return (-1);
	}
	return (square_root(n, r + 1));
}

/**
 * _sqrt_recursion - function that find the square root of natural number
 * @n: the number to find the root
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (square_root(n, 2));
}
