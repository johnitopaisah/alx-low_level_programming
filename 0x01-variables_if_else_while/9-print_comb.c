#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the possible
 * combinations of single-digit numbers.
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
