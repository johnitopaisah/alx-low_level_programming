#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: first string
 * @s2: second string
 *
 * Return: Return the difference between the string
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	for (index = 0; s1[index] && s2[index]; index++)
	{
		if (s1[index] != s2[index])
		{
			return ((s1[index] - s2[index]));
		}
	}
	return (s1[index] - s2[index]);
}
