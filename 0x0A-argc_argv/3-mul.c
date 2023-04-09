#include "main.h"
#include <stdio.h>


/**
 * _atoi - function that converts string to integer
 * @s: pointer to the string
 *
 * Return: Return the integer converted from the string
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
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}


/**
 * main - function that multiplies two numbers
 * @argc: argument counter
 * @argv: pointer to argument vector
 *
 * Return: Return 0 if successful and 1 if oterwise
 */
int main(int argc, char *argv[])
{
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
