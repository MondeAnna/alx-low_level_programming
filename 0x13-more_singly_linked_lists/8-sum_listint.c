#include "lists.h"

/**
 * sum_listint- sum data in linked list
 * @head: head of list
 *
 * Return: sum of data in linked list (int)
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	if (!head->next)
		return (head->n);

	return (head->n + sum_listint(head->next));
}
