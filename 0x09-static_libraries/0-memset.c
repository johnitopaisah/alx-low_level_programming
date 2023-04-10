#include "main.h"

/**
 * _memset - function that fill memory wiht a constant byte
 * @s: The pointer to the memory area
 * @b: The constant byte
 * @n: The number of byte to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
