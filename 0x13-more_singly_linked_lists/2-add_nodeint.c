#include "lists.h"

/**
 * add_nodeint- add node as head of linked list
 * @head: head of list
 * @n: data being added
 *
 * Description: value of parametrised pointer is changed as
 * well as having newly apponed value returned by function
 *
 * Return: address of new head (listint_t *)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(*head));

	if (!node)
		return (node);

	node->n = n;

	/* this tunary looks unnecessary */
	node->next = *head ? *head : NULL;
	*head = node;

	return (*head);
}
