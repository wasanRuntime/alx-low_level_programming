#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint -convert a binary number
 * to an unsigned int
 * @b:string pointer
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_number = 0;

	if (b == NULL)
	return (0);

	for (; *b != '\0'; b++)
	{
	if (*b == '0')
	b_number = b_number << 1;
	else if (*b == '1')
	b_number = (b_number << 1) | 1;
	else
	return (0);
	}

	return (b_number);
}

