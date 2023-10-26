#ifndef _MAIN_H_
#define _MAIN_H_

/* Unleash the Power of Bit Manipulation! */

int _putchar(char c); /* A magical function to put characters */

/* Transform a binary secret into a numerical revelation! */
unsigned int binary_to_uint(const char *b);

/* Print a number in its most enigmatic binary form */
void print_binary(unsigned long int n);

/* Delve into the mysteries of the bitstream and reveal hidden treasures */
int get_bit(unsigned long int n, unsigned int index);

/* Write a magical spell to set a bit's destiny */
int set_bit(unsigned long int *n, unsigned int index);

/* Erase a bit from existence with this mystical function */
int clear_bit(unsigned long int *n, unsigned int index);

/* Embark on an adventure of bit-flipping and count your flips */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Dive into the depths of endianness and discover the secret order */
int get_endianness(void);

#endif
