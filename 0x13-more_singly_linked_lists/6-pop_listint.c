#include "lists.h"

/**
 * pop_listint - pop first item in linked list
 * @head: head of linked list
 *
 * Return: head node's data else zero if list
 * is empty(int)
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n = 0;

	if (!head || !(*head))
		return (n);

	curr = malloc(sizeof(*head));

	if (!curr)
		return (n);

	curr = *head;

	n = curr->n;
	*head = curr->next;

	free(curr);

	return (n);
}
