#include "main.h"

/**
 * more_numbers - Functions that prints 10 times the number 0 - 14
 *
 * Return: Return nothing
 */
void more_numbers(void)
{
	char i, j;
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{	
			k = j;
			if (j >= 10)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
