#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the number to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n);
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
