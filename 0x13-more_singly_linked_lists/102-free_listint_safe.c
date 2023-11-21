#include "lists.h"

/**
 * free_listint_safe - free all nodes
 * of linked list
 * @h: head of list
 *
 * Return: size of freed list (size_t)
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *end;
	size_t len = 0;

	if (!h || !(*h))
		return (len);

	end = *h;

	while (end)
	{
		curr = end;
		end = end->next;
		free(curr);
		len++;
	}

	*h = NULL;

	return (len);
}
