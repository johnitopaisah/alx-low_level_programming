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
		if (*strg1 == '\0' && *(strg2 + 1) == '\0')
			return (1);
		if  (*strg1 == '\0' || *(strg2 + 1) == '\0')
			return (0);
		else if (wildcmp(strg1, strg2 + 1) || wildcmp(strg1 + 1, strg2))
			return (1);
	}
	else if (*strg1 != '\0' && *strg2 != '\0' && (*strg1 == *strg2 || *strg2 == '?'))
	{
		if (wildcmp(strg1 + 1, strg2 + 1))
			return (1);
	}
	else if (*strg1 == '\0' && *strg2 == '\0')
		return (1);

	return (0);

}
