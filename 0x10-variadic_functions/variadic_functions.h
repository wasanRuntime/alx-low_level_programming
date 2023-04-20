#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct chr_opt_to_prnt_opt - Structure to link characters \
and functions to print
 * @chr_opt: Character that represents data type
 * @prnt_opt: Pointer to the function that prints data type
 */
typedef struct chr_opt_to_prnt_opt
{
	char *chr_opt;
	void (*prnt_opt)(va_list);
} chr_opt_to_prnt_opt_type;

#endif
