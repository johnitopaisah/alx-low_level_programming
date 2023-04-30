#include <stdio.h>
#include <stdlib.h>

/**
 * main - To prints the opcode the main function
 * @argv: The array of string vector passed as argument
 * @argc: The counter to counts the number of argument passed.
 *
 * Return: Upon success, return 0. 1 or 2 on errors
 */
int main(int argc, char *argv[])
{
	int num_byt, j;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_byt = atoi(argv[1]);
	if (num_byt < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (unsigned char *)main;

	for (j = 0; j < num_byt; j++)
	{
		printf("%02x", *(ptr + j));
		if (j != (num_byt - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
