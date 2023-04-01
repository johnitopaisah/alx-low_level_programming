#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int index;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == ' ' || s[index] == '\t' || s[index] == '.')
		{
			if (s[index + 1] >= 'a' && s[index] <= 'z')
			{
				s[index + 1] = s[index + 1] - 32;
			}
		}
	}
	return (s);
}
