#include "main.h"

/**
 * factorial - function that returns the factorial a given number
 * @n: the given number to pass to the function
 *
 * Return: Always returns the result
 */
int factorial(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
