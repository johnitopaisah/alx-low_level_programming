#include "main.h"

/**
 * check_with_divisor - function that check for prime
 * integer n with the help of divider
 * @n: Integer to check whether its prime or not
 * @div: The divisor for check through n
 *
 * Return: Return 1 if n is prime or 0 otherwise
 */
int check_with_divisor(int n, int div)
{
	if (n / div == 0)
	{
		return (0);
	}
	if (div * div > n)
	{
		return (1);
	}
	return (check_with_divisor(n, div + 1));
}


/**
 * is_prime_number - function that checks if an integer is primce
 * @n: The integer to check for
 *
 * Return: Return 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	return (check_with_divisor(n, 2));
}
