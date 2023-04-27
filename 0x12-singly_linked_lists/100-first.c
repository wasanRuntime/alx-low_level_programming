#include <stdio.h>

void print_fun(void) __attribute__ ((constructor));
/**
 * print_fun -  prints a string before the main function
 */

void print_fun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
