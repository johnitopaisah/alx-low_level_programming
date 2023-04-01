#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int index, i;
	char sep[] = " \t\n,;.!?()\"{}";

	for (index = 0; s[index]; index++)
	{
		for (i = 0; sep[i]; i++)
		{
			if (s[index] == sep[i])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				{
					s[index + 1] = s[index + 1] - 32;
				}
			}
		}
	}
	return (s);
}
