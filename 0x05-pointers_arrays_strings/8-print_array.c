#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: pointer to a string as parameter
 * @n: size of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
