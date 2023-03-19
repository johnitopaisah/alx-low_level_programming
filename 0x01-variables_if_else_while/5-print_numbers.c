#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit number of base 10 from 0,
 * followed by a new line
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
