#include "main.h"

/**
 * main - The program entering point
 * @argc: Counter that holds the number of argument
 * @argv: Pointer to string
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv)
{
	int i;
	int tmp;
	int count;
	int digit;

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
	char str[digit];

	for (i = digit - 1; i >= 0; i--)
	{
		str[i] = ((count % 10) + '0');
		count /= 10;
	}

	/*printing the digit using _putchar*/
	for (i = 0; i < digit; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
