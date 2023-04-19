#include <stdio.h>

int sum(int, int);

void main(void)
{
	int s;
	int (*ptr)(int, int) = sum;

	s = ptr(1, 2);
	printf("Sum = %d\n", s);
}

int sum(int a, int b)
{
	return (a + b);
}
