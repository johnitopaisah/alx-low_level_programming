#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert strings to integer
 * @s: the string to be converted
 *
 * Return: Return the integer converted
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = ((num * 10) + (s[i] - '0'));
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}

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
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += _atoi(argv[i]);
		}
		printf("sum is: %d\n", sum);
	}

	return (0);
}
