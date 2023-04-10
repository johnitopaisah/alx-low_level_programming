#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: pointer to the destination
 * @src: pointer to the source
 *
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
