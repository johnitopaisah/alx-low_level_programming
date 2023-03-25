#include "main.h"

/**
 * print_triangle - Function to print triangle
 * @size: size of the triangle
 * Return: Return nothing
 */
void print_triangle(int size)
{
	int row, col;
	int midpoint;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		midpoint = size - row;
		for (col = 1; col <= midpoint; col++)
		{
			_putchar(' ');
		}
		for (col = midpoint; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
