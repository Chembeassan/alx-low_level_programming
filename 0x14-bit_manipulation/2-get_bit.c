#include "main.h"

/**
 * get_bit - Dive into the bitstream and fetch a treasure
 * @n: The chest to inspect
 * @index: The index of the treasure to uncover
 * Return: The treasure, or -1 if it's well-guarded
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (int)((n >> index) & 1);
}
