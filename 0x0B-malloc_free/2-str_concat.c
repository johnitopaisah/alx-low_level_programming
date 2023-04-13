#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer to the destination string.
 * @s2: pointer to the source string
 *
 * Return: Return the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, t_len, len1, len2;
	char *str;

	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (i = 0; s2[i]; i++)
	{
		len2++;
	}
	t_len = len1 + len2;
	if (s1 && s2 == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (t_len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			str[i] = s1[i];
		}
		for (i = len1; s2[i]; i++)
		{
			str[i] = s2[i];
		}
		str[t_len] = '\0';
		return (str);
	}
}
