#include "hash_tables.h"

/**
 * _get_key_value_count - number of key/value pairs
 * @ht: hash tabke
 * Return: number of key/value pairs
 */
unsigned long int _get_key_value_count(const hash_table_t *ht)
{
	unsigned long int count = 0;
	unsigned long int iter = 0;

	while (iter < ht->size)
		if (ht->array[iter++])
			count++;

	return (count);
}

/**
 * _print - print key/value pair
 * @node: node carrying pair
 * @count: whether node is the last of not
 * Return: void
 */
void _print(hash_node_t *node, unsigned long int count)
{
	printf("'%s': '%s'", node->key, node->value);

	if (count)
		printf(", ");
}

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	unsigned long int iter;
	hash_node_t **array;
	hash_node_t *node;

	if (!ht)
		return;

	count = _get_key_value_count(ht);
	array = ht->array;
	iter = 0;

	putchar('{');

	while (iter < ht->size)
	{
		node = array[iter++];

		if (node)
		{
			_print(node, --count);

			while (node->next)
			{
				node = node->next;
				_print(node, --count);
			}
		}
	}

	puts("}");
}
