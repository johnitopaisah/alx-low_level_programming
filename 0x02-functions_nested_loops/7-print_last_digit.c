#include "main.h"

/**
 * print_last_digit - Function that print the last digit of a number
 * @r: Parameter for the number
 *
 * Return: Return the an int
 */
int print_last_digit(int r)
{
	int i;
	if (r < 0)
	{
		i = ((r % 10) * -1);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = (r % 10);
		_putchar(i + '0');
		return (i);
	}
}
