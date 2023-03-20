#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations
 * of two two-digit numbers.
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int first_two_digit;
	int sec_two_digit;

	for (first_two_digit = 0; first_two_digit <= 98; first_two_digit++)
	{
		for (sec_two_digit = 1; sec_two_digit <= 99; sec_two_digit++)
		{
			putchar((first_two_digit / 10) + '0');
			putchar((first_two_digit % 10) + '0');
			putchar(' ');
			putchar((sec_two_digit / 10) + '0');
			putchar((sec_two_digit % 10) + '0');
			if (first_two_digit != 98 || sec_two_digit != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
