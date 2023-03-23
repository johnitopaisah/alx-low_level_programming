#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the
 * variabel n each time it is executed
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
