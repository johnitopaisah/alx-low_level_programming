#include "main.h"

/**
 * _memset - function that fill memor with a constant byte
 * @s: The pointer to the memory area
 * @b: The constant byte
 * @n: The number of byte to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
