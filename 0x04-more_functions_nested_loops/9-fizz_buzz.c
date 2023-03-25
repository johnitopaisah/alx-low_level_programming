#include <stdio.h>

/**
 * main - Function that prints 1 - 100 whith
 * fizz, buzz and fizzbuzz challenge
 *
 * Return: Return nothing
 */
int main(void)
{
	int i, value;

	for (i = 1; i <= 100; i++)
	{
		value = i;
		if (value % 3 == 0 && value % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else if (value % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (value % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", value);
		}
	}
	printf("\n");
	return (0);
}

