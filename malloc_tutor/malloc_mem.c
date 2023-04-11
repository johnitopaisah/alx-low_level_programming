#include <stdio.h>
#include <stdlib.h>

/**
 * m - sores 3 int in a new allocatted space in memory and prints the sum
 * @n0: integer to store and print
 * @n1: integer to store and print
 * @n2: integer to store and print
 *
 * Return: nothing.
 */
void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) *3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[1], sum);
}

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
	m(98, 402, -1024);
	return (0);
}
