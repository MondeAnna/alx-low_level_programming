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
 * get_dnodeint_at_index - return node at given index
 * @head: head of list
 * @index: index of node to return
 * Return: node (dlistint_t) else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index >= _len(head))
		return (NULL);

	while (index--)
		head = head->next;

	return (head);
}
