#include "main.h"

/**
 * flip_bits - filps bit from one number to another.
 * @n: num 1.
 * @m: num 2.
 * Return: bit number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
