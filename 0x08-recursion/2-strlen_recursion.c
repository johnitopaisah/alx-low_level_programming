#include "main.h"

/**
 * _strlen_recursion - Recursively return length of string
 * @s: pointer to the string
 *
 * Return: Return the number of character in the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
