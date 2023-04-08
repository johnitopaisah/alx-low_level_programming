#include "main.h"

/**
 * print_digit - function to print the number
 * @n: the number to print
 * Return: nothing
 */
void print_digit(int n)
{
	if (n / 10 != 0)
	{
		print_digit(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * main - print the number of arguments passed into main
 * @argc: number of command
 * @argv: array name
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, n;
	int count = 0;

	if (argc <= 1)
	{
		_putchar((argc - 1) + '0');
	}
	else
	{
		for (i = 0; argv[i]; i++)
		{
			count++;
		}
		n = count - 1;
		print_digit(n);
	}
	_putchar('\n');
	return (0);
}

