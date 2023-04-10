#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of element to copy
 *
 * Return: Return the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[index++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
