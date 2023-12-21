#include "main.h"

/**
 * binary_to_uint - function to converts a binary to an unsigned int
 * @b: pointer to the string of 0 and 1
 *
 * Return: the converted number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convt_num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		convt_num <<= 1;
		convt_num += b[i] - '0';
	}

	return (convt_num);
}
