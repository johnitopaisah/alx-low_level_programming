#include "main.h"

/**
 * print_diagonal Funtion that print diagonal
 * @n: Function parameter
 *
 * Return: Return nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{	
				_putchar(' ');
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
}
