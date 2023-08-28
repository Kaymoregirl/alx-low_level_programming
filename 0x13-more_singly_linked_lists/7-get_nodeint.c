#include "lists.h"

/**
 * get_nodeint_at_index - It returns node at certain indx in a linked list
 * @head: Linked list to be the first node
 * @index: Returns indx of the node
 *
 * Return: Returns pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
