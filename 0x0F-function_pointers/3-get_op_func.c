#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Pick the right function to carry out the requested operation by the user
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (op[k].op != NULL && *(ops[k].op) != *s)
		k++;

	return (ops[k].f);
}
