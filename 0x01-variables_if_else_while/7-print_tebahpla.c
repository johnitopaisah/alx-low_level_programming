#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char lowercase = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase - i);
	}
	putchar('\n');

	return (0);
}
