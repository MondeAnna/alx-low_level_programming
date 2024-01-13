#include "lists.h"

/**
 * sum_dlistint - sum of all data in list
 * @head: head of list
 * Return: sum of all data in list (int)
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
