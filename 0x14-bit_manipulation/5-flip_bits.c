#include "main.h"

/**
 * flip_bits - It counts the numb of bits needed to be
 * flipped to get from one numb to another numb.
 * @n: The number.
 * @m: Number to flip n to.
 * Return: Number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}


	return (b);
}
