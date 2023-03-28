#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: pointer to a string as the function parameter
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int midpt;

	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	if (len % 2 != 0)
	{
		len--;
		midpt = len / 2;
	}
	midpt = len / 2;
	while (str[midpt] != '\0')
	{
		_putchar(str[midpt]);
		midpt++;
	}
	_putchar('\n');
}
