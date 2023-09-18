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
 * insert_nodeint_at_index - insert node at given index
 * @head: head of list
 * @idx: insertion index
 * @n: new node's data
 *
 * Description: where idx is the index of the list where
 * the new node should be added. Index starts at 0. where
 * not possible to add new node at index idx, returns null
 *
 * Where index appends to current tail, said amendment is
 * made
 *
 * Return: address of new node else null (listint_t *)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = NULL, *node = NULL, *prev = NULL;
	size_t len = listint_len(*head);

	if (idx > len)
		return (NULL);

	node = malloc(sizeof(*head));

	if (!node)
		return (node);

	node->n = n;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	prev = *head;
	curr = prev->next;

	while (--idx)
	{
		prev = prev->next;
		curr = curr->next;
	}

	prev->next = node;
	node->next = curr;

	return (node);
}
