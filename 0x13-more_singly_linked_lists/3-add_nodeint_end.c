#include "lists.h"

/**
 * add_nodeint_end - add node as tail of linked list
 * @head: head of list
 * @n: value of new tail
 *
 * Return: address of head of list (listint_t *)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = malloc(sizeof(*head));
	listint_t *tracker;

	if (!tail)
		return (tail);

	tail->n = n;
	tail->next = NULL;

	if (!(*head))
	{
		*head = tail;
		return (*head);
	}

	tracker = *head;

	while (tracker->next)
		tracker = tracker->next;

	tracker->next = tail;

	return (*head);
}
