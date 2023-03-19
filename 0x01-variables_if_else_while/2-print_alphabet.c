#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter + i);
	}
	putchar('\n');

	return (0);
}
