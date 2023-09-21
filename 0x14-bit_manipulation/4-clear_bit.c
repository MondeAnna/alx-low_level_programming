#include "main.h"

/**
 * clear_bit - clear bit at given index to 0
 * @n: integer from which indexes are sourced
 * @index: desired index
 *
 * Return: 1 if worked else -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (!n)
		return (-1);

	*n = *n & ~mask;

	return (1);
}
