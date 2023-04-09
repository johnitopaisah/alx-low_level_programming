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
	unsigned int num = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == '-')
		{
			sign *= -1;
		}
		else if (s[j] >= '0' && s[j] <= '9')
		{
			num = (num * 10) + (s[j] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}
