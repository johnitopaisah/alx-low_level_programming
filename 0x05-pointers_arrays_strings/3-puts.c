#include "main.h"

/**
 * _puts - funtion that print a string followed by a new line
 * @str: pointer as a parameter of the function
 *
 * Return: Return nothing.
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
