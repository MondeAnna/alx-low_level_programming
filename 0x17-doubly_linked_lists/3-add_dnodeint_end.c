#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head
 * @n: data
 * Return: pointer to new head (dlistint_t)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(*head));
	dlistint_t *tail = *head;

	if (!node)
		return (*head);

	while (tail->next)
		tail = tail->next;

	tail->next = node;

	node->prev = tail;
	node->next = NULL;
	node->n = n;

	if (!(*head))
	{
		*head = node;
		return (*head);
	}

	return (*head);
}
