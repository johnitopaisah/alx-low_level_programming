#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prins all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: Always return 0 (0)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 0; j < 6; j++)
	{
		putchar(j + 'a');
	}
	putchar('\n');

	return (0);
}
