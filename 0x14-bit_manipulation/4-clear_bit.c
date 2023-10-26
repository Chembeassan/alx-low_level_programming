#include "main.h"

/**
 * clear_bit - Erase a bit from existence
 * @n: The number in which to perform the vanishing act
 * @index: The index of the bit to make disappear
 * Return: 1 if successful, or -1 if there is a haunting
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
