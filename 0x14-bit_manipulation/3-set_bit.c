#include "main.h"

/**
 * set_bit - Write a magical spell to set a bit
 * @n: The enchanted number
 * @index: The scroll's index to inscribe the spell
 * Return: 1 if the spell is successful, or -1 if there is a curse
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
