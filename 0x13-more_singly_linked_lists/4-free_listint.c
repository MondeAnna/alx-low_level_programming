#include "lists.h"

/**
 * free_listint - free all nodes of linked list
 * @head: head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
