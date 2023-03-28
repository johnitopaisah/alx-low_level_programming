#include "main.h"

/**
 * puts2 - Function that print every other character of a string
 * @str: pointer to a string as a parameter to the function.
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
