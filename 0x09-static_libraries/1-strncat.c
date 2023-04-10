#include "main.h"

/**
 * _strncat - function that concatenates n elements of string
 * to another string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of the element to concat
 *
 * Return: Return the character
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; s[i] && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
