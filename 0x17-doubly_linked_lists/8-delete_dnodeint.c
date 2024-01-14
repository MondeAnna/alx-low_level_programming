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
 * delete_dnodeint_at_index - add node at head of list
 * @head: head of list
 * @index: index to insert at
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *prev, *temp;

	if (!head || !(*head) || index >= _len(*head))
		return (-1);

	prev = h = *head;

	while (index--)
	{
		prev = h;
		h = h->next;
	}

	if (!h->next)
	{
		prev->next = NULL;
		free(h);
	}
	else
	{
		prev->next = h->next;
		temp = h;
		h = h->next;
		free(temp);
	}

	return (1);
}

