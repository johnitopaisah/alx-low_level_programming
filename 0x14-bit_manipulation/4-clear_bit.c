#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to a given index to 0
 * @n: Pointer to the bit
 * @index: The index to set the value to
 *
 * Return: On success, return 1
 *		On failure, return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
