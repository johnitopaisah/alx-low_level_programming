#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: pointer to mewly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len0, len1, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len0 = strlen(s1);
	len1 = strlen(s2);

	if (n >= len1)
	{
		n = len1;
	}

	result = malloc(sizeof(char) * (len0 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len0; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
