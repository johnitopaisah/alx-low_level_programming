#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, otherwise 98, 99 or 100
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *operate;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operate = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(operate) == NULL || operate[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operate == '/' && b == 0) ||
			(*operate == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", get_op_func(operate)(a, b));

	return (0);
}
