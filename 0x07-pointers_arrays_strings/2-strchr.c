#include "main.h"

/**
 * _strchr - function that locate character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: Return pointer to the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (s + 1);
}
