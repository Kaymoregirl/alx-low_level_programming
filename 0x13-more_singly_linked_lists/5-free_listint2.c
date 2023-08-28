#include "lists.h"

/**
 * free_listint2 - It frees the linked list
 * @head: It frees the pointer to the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
