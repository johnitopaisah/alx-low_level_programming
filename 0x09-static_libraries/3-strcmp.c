#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns the difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
