#include "main.h"

/**
 * print_number - function that print number
 * @n: the number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
