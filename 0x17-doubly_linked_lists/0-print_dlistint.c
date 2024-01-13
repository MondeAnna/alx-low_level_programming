#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: head
 * Return: size of list (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);

	return (1 + print_dlistint(h->next));
}
