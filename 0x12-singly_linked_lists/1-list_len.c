#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @k: pointer to the list_t list
 *
 * Return: number of elements in k
 */

size_t list_len(const list_t *k)
{
	size_t a = 0;

	while (k)
	{
		a++;
		k = k->next;
	}
	return (a);
}
