#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Pointer to the bit
 * @index: The index to be given
 *
 * Return: On success return 1.
 *		On failure return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
