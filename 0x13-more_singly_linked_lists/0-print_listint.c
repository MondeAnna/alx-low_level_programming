#include "lists.h"

/**
 * print_listint - print all data in linked list
 * @h: head of list
 *
 * Return: node count (size_t)
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		++len;
	}

	printf("%d\n", h->n);

	return (++len);
}
