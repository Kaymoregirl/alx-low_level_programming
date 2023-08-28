#include "lists.h"

/**
 * listint_len - Elements in a linked lists that returns the number
 * @h: The linked list of the type listint_t to traverse
 *
 * Return: Returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
