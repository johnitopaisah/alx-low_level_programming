#include "main.h"

/**
 * times_table - Function for 9 times table
 *
 * Return: Return nothing
 */
void times_table(void)
{
	int row, col;
	int multiply;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			multiply = row * col;
			if (multiply <= 9)
			{
				_putchar(multiply + '0');
				if (col != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((multiply / 10) + '0');
				_putchar((multiply % 10) + '0');
				if (col != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
