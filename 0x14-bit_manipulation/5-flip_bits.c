#include "main.h"

/**
 * flip_bits - count bits to flip to convert to secondary digit
 * @n: start value
 * @m: end value
 *
 * Return: bit count (unsigned int)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r = n ^ m;
	int count = 0;

	while (r)
	{
		r = r & (r - 1);
		count++;
	}

	return (count);
}
