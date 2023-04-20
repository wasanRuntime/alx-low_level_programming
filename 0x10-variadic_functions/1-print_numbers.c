#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: Numbers to be printed.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arglist;

	va_start(arglist, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arglist, int));
		if (x == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
