#include "main.h"

/**
 * print_numbers - Function that prints numbers 0 - 9
 *
 * Return: Return nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
