#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
