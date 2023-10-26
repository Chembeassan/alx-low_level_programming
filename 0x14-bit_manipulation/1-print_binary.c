#include "main.h"

/**
 * print_binary - Embrace the beauty of binary art
 * @n: The number to unveil in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
