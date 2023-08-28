#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @k: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*k)(char *))
{
	if (name == NULL || k == NULL)
		return;

	k(name);
}
