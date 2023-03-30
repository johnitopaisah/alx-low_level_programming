#include "main.h"
/* #include <stdio.h> */

/**
 * *_strcat - function that concatenates two strings
 * @dest: pointer to destination string to be copied to
 * @src: pointer to the source string to be copied from
 *
 * Return: Return characters
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	/* printf("%d\n", dest_len); */
	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
