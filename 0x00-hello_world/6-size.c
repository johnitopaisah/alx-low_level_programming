#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: Write a C program that prints the size of various
 * types on the computer it is compiled and run on.
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %ld byte(s)\n", sizeof(char));
	puts("Size of an int: %ld byte(s)\n", sizeof(int));
	puts("Size of a long int: %ld byte(s)\n", sizeof(long int));
	puts("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	puts("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
