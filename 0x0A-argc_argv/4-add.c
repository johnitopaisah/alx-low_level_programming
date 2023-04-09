#include "main.h"

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
 * print_number - function to print number
 * @n: the number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n);
	}
	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}


/**
 * main - function that adds positive numbers
 * @argc: counter of the arguments passed
 * @argv: pointer to the arguments vector passed
 * Return: Always return 0 if successful or 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int sum = 0;
	char message[] = "Error";

	if (argc == 1)
	{	
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					for (k = 0; message[k]; k++)
					{
						_putchar(message[k]);
					}
					_putchar('\n');
					return (1);
				}
			}
			sum += _atoi(argv[i]);
		}
		print_number(sum);
		_putchar('\n');
	}
	return (0);
}
