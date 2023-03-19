#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 *
 * Return: Always return 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
