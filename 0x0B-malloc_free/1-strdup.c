#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: pointer to the string that is passed to the function
 *
 * Return: Returns pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	while (str[i++])
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{	s = malloc(sizeof(char) * len);
		for (i = 0; str[i]; i++)
		{
			s[i] = str[i];
		}
		printf("\n");
		return (s);
	}
}
