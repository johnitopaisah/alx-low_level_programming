#include "main.h"

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * @b: Pointer to a string of character of 1 and 0
 *
 * Return: Return the converted string or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	int indx = 0;

	if (b[indx] == '\0')
		return (0);

	for (indx = 0; b[indx] != '\0'; indx++)
	{
		if (b[indx] != '0' && b[indx] != '1')
			return (0);
	}


	indx = 0;

	while (b[indx] == '0' || b[indx] == '1')
	{
		converted_num <<= 1;
		converted_num += b[indx] - '0';
		indx++;
	}

	return (converted_num);
}
