#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i, f;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase + i);
	}
	for (f = 0; f < 26; f++)
	{
		putchar(uppercase + f);
	}
	putchar('\n');

	return (0);
}
