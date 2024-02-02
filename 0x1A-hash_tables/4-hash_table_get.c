#include "hash_tables.h"

/**
 * hash_table_get - get value from table
 * @ht: hash table
 * @key: key being evaluated
 * Return: value at key (char *)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	if (!(ht->array[index]))
	{
		return ("(null)");
	}

	return (ht->array[index]->value);
}
