#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 *   to get from one number to another
 * @n: The 1st number.
 * @m: The 2nd number.
 *
 * Return: The number of bits needed to flip(is_flip).
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res_xor = n ^ m;
	unsigned int is_flip = 0;

	while (res_xor > 0)
	{
	if ((res_xor & 1) == 1)
	is_flip++;
	res_xor >>= 1;
	}
	return (is_flip);
}

