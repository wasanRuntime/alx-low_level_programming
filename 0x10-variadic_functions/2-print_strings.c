#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: Numbers to be printed out.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arguments);
}
