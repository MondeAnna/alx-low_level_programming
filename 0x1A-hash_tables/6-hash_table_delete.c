#include "hash_tables.h"

/**
 * _free_list - free linked list carrying values
 * @head: head of list carrying values
 * Return: void
 */
void _free_list(hash_node_t *head)
{
	hash_node_t *temp = head;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(head);
}

/**
 * hash_table_delete - delete hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			_free_list(ht->array[i]);

	free(ht);
}
