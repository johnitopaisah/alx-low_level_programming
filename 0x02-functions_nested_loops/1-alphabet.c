#include "main.h"

/**
 * print_alphabet - function that prints the lowercase alphabets
 *
 * Return: Return void.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
