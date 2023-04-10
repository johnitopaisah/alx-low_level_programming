#include "main.h"

/**
 * _atoi - function to convert strings to integer
 * @s: pointer to the string to be converted
 *
 * Return: return the converted integer
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
 * print_number - function to print number
 * @n: the number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
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
 * main - function that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: counter of the number of arguments passed
 * @argv: pointer to the array of strings of the arguments passed
 *
 * Return: Return 0 if successful or 1 if otherwise
 */
int main(int argc, char *argv[])
{
	char message[] = "Error";
	int i, coin = 0;
	int var;

	if (argc != 2)
	{
		for (i = 0; message[i] != '\0'; i++)
		{
			_putchar(message[i]);
		}
		_putchar('\n');
		return (1);
	}
	var = _atoi(argv[1]);
	if (var < 0)
	{
		_putchar('0');
		_putchar('-');
		return (0);
	}
	else
	{
		coin += var / 25;
		var %= 25;

		coin += var / 10;
		var %= 10;

		coin += var / 5;
		var %= 5;

		coin += var / 2;
		var %= 2;

		coin += var;

		print_number(coin);
		_putchar('\n');
	}
	return (0);
}
