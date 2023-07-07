#include "main.h"

/**
 * get_bit - Function to get the value of a bit at a given index.
 * @n: The bit
 * @index: The index to be given.
 *
 * Return: Return the value of the bit at index or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
