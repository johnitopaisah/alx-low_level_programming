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
	int first_num;
	int sec_num;

	for (first_num = 0; first_num <= 98; first_num++)
	{
		for (sec_num = first_num + 1; sec_num <= 99; sec_num++)
		{
			putchar((first_num / 10) + '0');
			putchar((first_num % 10) + '0');
			putchar(' ');
			putchar((sec_num / 10) + '0');
			putchar((sec_num % 10) + '0');
			if (first_num != 98 || sec_num != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
