#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: pointer to string, and also argument vector
 *
 * Return: Alway return 0.
 */
int main(int argc, char *argv[])
{
	int index1 = 0, index2;

	while (index1 < argc)
	{
		for (index2 = 0; argv[index1][index2]; index2++)
		{
			_putchar(argv[index1][index2]);
		}
		index1++;
	}
	_putchar('\n');
	return (0);
}
