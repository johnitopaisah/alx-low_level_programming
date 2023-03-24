#include "main.h"

/**
 * more_numbers - Functions that prints 10 times the number 0 - 14
 *
 * Return: Return nothing
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
