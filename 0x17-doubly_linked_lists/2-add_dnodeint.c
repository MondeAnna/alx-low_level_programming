#include "lists.h"

/**
 * add_dnodeint - add node at head of list
 * @head: head
 * @n: data
 * Return: pointer to new head (dlistint_t)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(*head));

	if (!node)
		return (*head);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (!(*head))
	{
		*head = node;
		return (*head);
	}

	(*head)->prev = node;
	*head = node;

	return (*head);
}
