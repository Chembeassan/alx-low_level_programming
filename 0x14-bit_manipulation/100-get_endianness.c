#include "main.h"

/**
 * get_endianness - Dive into the mysteries of endianness
 * Return: 0 if you find yourself in the realm of big endian, 1 if it's the land of little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	return (*endian);
}
