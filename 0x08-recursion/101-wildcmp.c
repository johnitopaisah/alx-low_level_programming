#include "main.h"

/**
 * wildcmp -  function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0
 * @strg2: sec string to be compared
 * @strg1: fir string to be compared
 *
 * Return: Returns 1 upon success and 0 if it fails
 */
int wildcmp(char *strg1, char *strg2)
{
	if (*strg2 == '*')
	{
		if (*(strg2 + 1) == '*')
			return (wildcmp(strg1, strg2 + 1));
		else if (!*strg1)
			return (wildcmp(strg1, strg2 + 1));
		else
			return (wildcmp(strg1, strg2 + 1) || wildcmp(strg1 + 1, strg2));
	}
	else
	{
		if (*strg1 == *strg2)
		{
			if (!*strg1)
				return (1);
			else
				return (wildcmp(strg1 + 1, strg2 + 1));
		}
	}

	return (0);
}
