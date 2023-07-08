#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Alway 0
 */
int main(void)
{
	int a = 10;
	int b = 6;

	printf("%d\n", (a & b));
	printf("%d\n", (a | b));
	printf("%d\n", (a ^ b));
	printf("%d\n", (a & b && b + 1 || 0 && b++));
	printf("%d\n", b);
	return (0);
}
