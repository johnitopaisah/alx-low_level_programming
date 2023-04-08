#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: Number of arguments passed to the function in command line
 * @argv: pointer to the array of arguments passed
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	int index1, index2;

	for (index1 = 0; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]; index2++)
		{
			_putchar(argv[index1][index2]);
		}
		_putchar('\n');
	}

	return (0);
}
