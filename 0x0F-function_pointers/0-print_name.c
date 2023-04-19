#include "function_pointers.h"
/*
*print_name - prints a name using pointer to function
*@name: name of the person
*@f: pointer to a fuction that returns void
*
*Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
