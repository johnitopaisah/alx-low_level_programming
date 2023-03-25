#include "main.h"

/**
 * print_sqare - Function that prints a square, followed by a new lin
 * @size: Function parameter
 *
 * Return: Return nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			if (j == size)
			{
				_putchar('\n');
			}
		}
	}
}
