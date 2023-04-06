#include "main.h"

/**
 * _print_rev_recursion - function that print string in reverve
 * @s: pointer to the string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
