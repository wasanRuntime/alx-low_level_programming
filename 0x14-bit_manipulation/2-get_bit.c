#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints the binary representation of a number
 * @index: -index of a given bit
 * @n:- variable to get bit from
 * Return: value of the bit (Success) or -1 (Error occurred)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int is_msk;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}

	is_msk = 1ul << index;

	if ((n & is_msk) == is_msk)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

