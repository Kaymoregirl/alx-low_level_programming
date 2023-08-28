#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - It Counts the number of the unique nodes
 * It is in a looped listint_t linked list.
 * @head: It checks the pointer to the head of the listint_t
 *
 * Return: Returns if the list is not looped - 0.
 * Otherwise - Returns the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mouse, *horse;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mouse = head->next;
	horse = (head->next)->next;

	while (horse)
	{
		if (mouse == horse)
		{
			mouse = head;
			while (mouse != horse)
			{
				nodes++;
				mouse = mouse->next;
				horse = horse->next;
			}

			mouse = mouse->next;
			while (mouse != horse)
			{
				nodes++;
				mouse = mouse->next;
			}

			return (nodes);
		}

		mouse = mouse->next;
		horse = (horse->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Safely Prints a listint_t list.
 * @head: The pointer to the head of the listint_t list.
 *
 * Return: Returns the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
