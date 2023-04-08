#include "main.h"

/**
 * _atoi - convers a string t an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if otherwise
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;

	/* skip any space */
	while (*s == ' ')
	{
		s++;
	}

	/* taking care of the nagative sigh */
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	/* converting each digit in the string to an integer */
	while (*s >= '0' && *s <= '9')
	{
		value = (value * 10) + (*s - '0');
		s++;
	}
	return (value * sign);
}
