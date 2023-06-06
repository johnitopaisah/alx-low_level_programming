#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *n;
	int a;

	n = &a;
	*n= 402;
	printf("a=%d\n", a);
/*	reset_to_98(&n);
	printf("n=%d\n", n);*/
	return (0);
}
