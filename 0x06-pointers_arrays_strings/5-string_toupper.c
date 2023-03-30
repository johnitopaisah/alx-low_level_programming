#include "main.h"

/**
 * string_toupper - function to conver all lowercaes
 * letter to uppercase
 *
 * @str: pointer to the first letter of the string
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr++)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
	}
	return (str);
}
