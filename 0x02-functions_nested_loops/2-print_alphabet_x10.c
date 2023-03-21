#include "main.h"

/**
 * print_alphabet - This function prints all the lowercase
 * alphabets 10 times
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
