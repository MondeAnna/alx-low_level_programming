#include "hash_tables.h"

#include <stdio.h>

/**
 * key_index - index of key
 * @key: key
 * @size: size of hash table's array
 * Return: index of key (unsigned long int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
