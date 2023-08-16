#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @w: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */

int (*get_op_func(char *w))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int q = 0;

	while (ops[q].op != NULL && *(ops[q].op) != *w)
		q++;

	return (ops[q].k);
}
