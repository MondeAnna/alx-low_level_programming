#include "lists.h"

/**
 * free_listint2- free all nodes of linked list, setting head to null
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *end;

	if (!head || !(*head))
		return;

	end = *head;

	while (end)
	{
		curr = end;
		end = end->next;
		free(curr);
	}

	*head = NULL;
}
