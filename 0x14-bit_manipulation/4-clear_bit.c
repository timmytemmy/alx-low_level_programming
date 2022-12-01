#include "main.h"

/**
 * clear_bit - sets bit value to 0.
 * @n: pointer to int.
 * @index: index of the bit.
 * Return: 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
		return (-1);
	
	p = 1 << index;

	if (*n & p)
		*n ^= p;

	return (1);
}
