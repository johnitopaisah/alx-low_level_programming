#include "3-calc.h"

/**
 * op_add - function that returns the sum of a and b
 * @a: 1st integer to be added
 * @b: 2nd integer to be added
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function that returns the difference between a and b
 * @a: the first integer
 * @b: the second inteter
 *
 * Return: The diff between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Function that multiply two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function that divide two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Returns the result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - function that finds the remainder of dividing a by b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
