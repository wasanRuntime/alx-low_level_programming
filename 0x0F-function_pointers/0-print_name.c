#include "function_pointers.h"
<<<<<<< HEAD
/*
*print_name - prints a name using pointer to function
*@name: name of the person
*@f: pointer to a fuction that returns void
*
*Return: Nothing.
=======
#include <stdio.h>
/**
 * print_name - prints name
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
>>>>>>> 1f231bf9f4259c4e8c815bc63249e3fa21afd4bc
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
