#include "function_pointers.h"
/**
*array_iterator - executes a function given
*@array: array pointer
*@size: size of the array
*@action: pointer to the function you need to use
*Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
