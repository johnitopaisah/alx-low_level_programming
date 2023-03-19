#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program prints all the alphabet in lowercase,
 * followed by a new line except the letters 'q' and 'e'.
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	char lowercase = 'a';
	char correct_lowercase;
	int i;

	for (i = 0; i < 26; i++)
	{
		correct_lowercase = lowercase + i;
		if (correct_lowercase != 'q' && correct_lowercase != 'e')
			putchar(correct_lowercase);
	}
	putchar('\n');

	return (0);
}
