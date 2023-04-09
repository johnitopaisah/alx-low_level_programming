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
 * print_number - function to print numbers using _putchar
 * @n: the number to print
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n);
	}
	else
	{
		if ((n / 10) != 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
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
	int i;
	unsigned int result;
	char message[] = "Error";

	if (argc != 3)
	{
		for (i = 0; message[i] != '\0'; i++)
		{
			_putchar(message[i]);
		}
		_putchar('\n');
		return (1);
	}
	else
	{
		result = _atoi(argv[1]) * _atoi(argv[2]);
		print_number(result);
		_putchar('\n');
	}
	return (0);
}
