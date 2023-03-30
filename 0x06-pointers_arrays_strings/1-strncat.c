#include "main.h"

/**
 * *_strncat - function that concatenates n elements of
 * string to another string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: integer for the number of element to concat
 *
 * Return: Return character
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int f = 0;

	while (dest[f++])
	{
		dest_len++;
	}
	for (f = 0; src[f] && f < n; f++)
	{
		dest[dest_len] = src[f];
		dest_len++;
	}
	return (dest);
}
