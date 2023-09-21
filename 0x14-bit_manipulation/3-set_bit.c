#include "main.h"

/**
 * set_bit - set bit at given index to 1
 * @n: integer from which indexes are sourced
 * @index: desired index
 *
 * Return: 1 if worked else -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (!n)
		return (-1);

	*n = *n | mask;

	return (1);
}
