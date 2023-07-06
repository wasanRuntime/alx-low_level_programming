#include <stdio.h>
#include "main.h"

/**
 * get_endianness -checks the endianness.
 * Return: 0 Always (Success)
 */

int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *)&x;

	if (ptr[0] == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
