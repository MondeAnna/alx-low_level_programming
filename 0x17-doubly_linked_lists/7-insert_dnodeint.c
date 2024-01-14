#include "lists.h"

/**
 * _len - print doubly linked list
 * @h: h
 * Return: size of list (size_t)
 */
size_t _len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + _len(h->next));
}

/**
 * insert_dnodeint_at_index - add node at head of list
 * @h: head of list
 * @idx: index to insert at
 * @n: data
 * Return: pointer to new node (dlistint_t *)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(*h));
	dlistint_t *curr = *h;

	if (!node || idx >= _len(*h))
		return (NULL);

	while (idx--)
		curr = curr->next;

	node->n = n;
	node->prev = curr->prev;
	node->next = curr;

	curr->prev = node;

	return (node);
}

