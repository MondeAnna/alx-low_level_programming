#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: ptr to first start of table (hash_table_t *)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	while (size--)
		table->array[size] = NULL;

	return (table);
}
