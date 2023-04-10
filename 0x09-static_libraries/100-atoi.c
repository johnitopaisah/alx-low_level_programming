#include "main.h"

/**
 * _atoi - function that conver strings to integer
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
		if (s[i] < 0)
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}
