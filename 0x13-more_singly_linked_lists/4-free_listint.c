#include "lists.h"

/**
 * free_listint - It frees the linked list
 * @head: It freed the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
