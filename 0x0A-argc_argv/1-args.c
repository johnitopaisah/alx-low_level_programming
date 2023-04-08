#include "main.h"

/**
 * main - The program entering point
 * @argc: Counter that holds the number of argument
 * @argv: Pointer to string
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int tmp;
	int count;
	int digit, dig;
	int div;

	digit = 0;
	count = argc - 1;
	tmp = count;

	/*count the number of digits in the number */
	while (tmp != 0)
	{
		digit++;
		tmp /= 10;
	}

	/*converting the number to a string*/

	if (count == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 0; i < digit; i++)
		{
			for (j = 0; j < digit - i; j++)
			{
				div *= 10;
			}
			dig = (count / div) % 10;
			_putchar(dig + '0');
		}
	}

	_putchar('\n');

	return (0);
}
