#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the destination string to be copied to
 * @src: pointer to the source string to be copied from
 *
 * Return: Return the character
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
