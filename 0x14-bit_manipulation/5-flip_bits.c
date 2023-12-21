#include "main.h"

/**
 * flip_bits - Function that count the number of bits needed to be flipped
 *		to get from one number to another
 * @n: The number to be flipped.
 * @m: The number to flip n to.
 *
 * Return: Return the number of bit necessary to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits = 0;

	xor = n ^ m;
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
