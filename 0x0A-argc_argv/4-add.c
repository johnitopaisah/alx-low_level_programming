#include "main.h"
#include <stdio.h>

/**
 * main - function that adds positive numbers
 * @argc: counter of the arguments passed
 * @argv: pointer to the arguments vector passed
 * Return: Always return 0 if successful or 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		for (j = i; argv[j]; j++)
		{
			if (!(argv[i][j] > '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		sum += *argv[i];
		}
	}
	printf("sum is: %d\n", sum);
	return (0);
}
