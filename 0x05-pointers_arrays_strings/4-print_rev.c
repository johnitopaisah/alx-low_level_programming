#include "main.h"

/**
 * print_rev - function that prints a string, in
 * reverse, followed by a new line
 * @s: point as a parameter to the function
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char rev_char;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		rev_char = s[len - i];
		_putchar(rev_char);
	}
	_putchar('\n');
}
