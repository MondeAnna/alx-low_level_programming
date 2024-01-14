#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (!head)
		return;

	while (head->next)
	{
		curr = head;
		head = head->next;
		free(curr);
	}

	free(head);
}
