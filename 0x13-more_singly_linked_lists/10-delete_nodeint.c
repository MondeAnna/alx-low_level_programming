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

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head of list
 * @index: index to be deleted
 *
 * Return: 1 if successfule else -1 (int)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	const int FAIL = -1, SUCCESS = 1;
	listint_t *curr, *prev;
	size_t len = listint_len(*head);

	if (index >= len)
		return (FAIL);

	prev = *head;
	curr = prev->next;

	/* using the pop function here would be wise */

	if (!index)
	{
		*head = curr;
		free(prev);
		return (SUCCESS);
	}

	while (--index)
	{
		prev = prev->next;
		curr = curr->next;
	}

	prev->next = curr->next;
	free(curr);

	return (SUCCESS);
}
