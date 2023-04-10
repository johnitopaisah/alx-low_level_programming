#include "main.h"

/**
 * _islower - funtion that check a character id lowercase
 * @c: the integer value it receives
 *
 * Return: Return 1 iff true or 0 if false.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
