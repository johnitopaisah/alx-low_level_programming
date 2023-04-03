#include "main.h"

/**
 * _memcpy(char *dest, char *src, unsigned int n)
 * @dest: pointer to the destination memory location to copy to
 * @src: pointer to the source memory location to copy from
 * @n: number of byte to copy
 *
 * Return: pointer to the the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
