#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: head of node
 * @index: desired index
 *
 * Description: zero based indexing used
 *
 * Return: nth node else null when absent (listint_t)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;
	return (head);
}
