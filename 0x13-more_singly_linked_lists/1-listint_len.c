#include "lists.h"

/**
 * listint_len - number of nodes in linked list
 * @h: linked list
 *
 * Return: node count (size_t)
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	if (!(h->next))
		return (1);

	return (listint_len(h->next) + 1);
}
