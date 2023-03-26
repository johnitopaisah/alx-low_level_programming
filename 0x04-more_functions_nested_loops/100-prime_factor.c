#include <stdio.h>
#include <math.h>

/**
 * mainl - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int i, largest;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	printf("%d\n", largest);

	return (0);
}
