#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the variable to be set bit into
 * @index: index of the bit to set.
 * Return: 1 (Success) else -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int is_msk;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	is_msk = 1ul << index;
	*n = *n | is_msk;
	return (1);
}

