#include "lists.h"

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	short int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * add_node - add node to start of linked list
 * @head: head node
 * @str: str value
 *
 * Return: pointer to new head node (list_t *)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*head));

	if (!node)
		return (node);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;

	*head = node;

	return (node);
}
