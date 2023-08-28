#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning of the linked list
 * @head: The first list pointer to the node
 * @n: Insert data in the new node
 *
 * Return: Returns the pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
