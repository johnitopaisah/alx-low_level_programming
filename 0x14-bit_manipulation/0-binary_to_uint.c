#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decim = 0;

	if (*b == '\0')
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		decim <<= 1;
		if (*b == '1')
			decim += 1;

		b++;
	}
	return (decim);
}
