#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer to the destination string.
 * @s2: pointer to the source string
 *
 * Return: Return the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0, t_len;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}


	while (s1[i++])
	{
		len1++;
	}
	while (s2[j++])
	{
		len2++;
	}
	t_len = len1 + len2;


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
		for (i = 0; i < len2; i++)
		{
			str[len1] = s2[i];
			len1++;
		}
		str[t_len] = '\0';
		return (str);
	}
}
