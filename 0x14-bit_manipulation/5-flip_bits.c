#include "main.h"

/**
 * flip_bits - Embark on a bit-flipping adventure
 * @n: The starting point
 * @m: The destination
 * Return: The number of flips needed to reach the destination
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return count;
}
