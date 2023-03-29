#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: pointer to destination string to be copied to
 * @src: pointer to the source string to be copied from
 *
 * Return: Return characters
 */
char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*pt != '\0')
	{
		pt++;
	}
	*pt++ = ' ';
	while (*src != '\0')
	{
		*pt = *src;
		pt++;
		src++;
	}
	*pt = '\0';
	return (dest);
}
