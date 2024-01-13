#include "lists.h"

/**
 * dlistint_len - print doubly linked list
 * @h: h
 * Return: size of list (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + dlistint_len(h->next));
}
