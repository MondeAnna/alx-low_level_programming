#include "lists.h"

/**
 * print_listint_safe - print all data in linked list
 * @head: head of list
 *
 * Return: node count (size_t)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	if (!head)
		return (len);

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		++len;
	}

	return (++len);
}
