#include "lists.h"

/**
 * list_len - display node count
 * @h: linked list
 *
 * Return: number of nodes in list (size_t)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
