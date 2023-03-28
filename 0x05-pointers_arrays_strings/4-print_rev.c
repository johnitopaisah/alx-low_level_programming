#include "main.h"

/**
 * print_rev - Function that print string in reverse
 * @s: pointer as the function parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
