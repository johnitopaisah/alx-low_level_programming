#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @src: source string from whick to copy from
 * @dest: destination string to copy to
 * @n: number of characters to copy from the string
 *
 * Return: Return string of character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[src_len++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		src[index] = '\0';
	}
	return (dest);
}
