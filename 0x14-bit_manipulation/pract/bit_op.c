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
	int c, d;

	c = a << 4;
	d = a >> 1;
	printf("%d\n", (a & b));
	printf("%d\n", (a | b));
	printf("%d\n", (a ^ b));
	printf("%d\n", (a & b && b + 1 || 0 && b++));
	printf("b= %d, c= %d, d= %d\n", b, c, d);
	return (0);
}
