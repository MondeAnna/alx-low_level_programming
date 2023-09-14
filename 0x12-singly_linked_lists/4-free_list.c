#include "lists.h"

/* while(head->next) */
/* temp = head */
/* head = head->next */
/* free(temp->str) */
/* free(temp) */

/**
 * free_list - free dynamically allocated
 * memory
 * @head: list head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp->next)
	{
		free(temp->str);
		temp = temp->next;
	}

	free(temp->str);

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
