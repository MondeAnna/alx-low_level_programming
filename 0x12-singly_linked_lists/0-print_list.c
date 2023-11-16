#include "lists.h"

/**
 * print_list - display node values
 * singly linked list
 * @h: linked list
 *
 * Return: number of nodes in list (size_t)
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *s;

	while (h)
	{
		s = h->str ? h->str : "(nill)";

		printf("[%d] %s\n", h->len, s);

		h = h->next;
		n++;
	}

	return (n);
}
