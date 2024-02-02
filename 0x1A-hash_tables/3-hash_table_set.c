#include "hash_tables.h"

/**
 * _make_node - add node to table's chain
 * @key: key being assigned to (cannot be empty)
 * @value: value to be associated with key
 * Return: ptr to new node (hash_node_t *)
 */
hash_node_t *_make_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(*node));

	if (!node)
		return (node);

	node->key = malloc(sizeof(*key) * strlen(key) + NULL_BYTE);
	node->value = malloc(sizeof(*value) * strlen(value) + NULL_BYTE);

	if (!node->key || !node->value)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value ? value : "(null)");

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - add element to table
 * @ht: the hash table
 * @key: key being assigned to (cannot be empty)
 * @value: value to be associated with key
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (EXIT_FAILURE);

	index = key_index((const unsigned char *) key, ht->size);
	node = _make_node(key, value);

	if (ht->array[index])
		node->next = ht->array[index];

	ht->array[index] = node;

	return (EXIT_SUCCESS);
}
