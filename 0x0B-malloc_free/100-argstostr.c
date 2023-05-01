#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: argument counter
 * @av: pointer to the argument vector
 *
 * Return: Return pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
