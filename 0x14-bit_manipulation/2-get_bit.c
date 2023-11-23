#include "main.h"

/**
 * _is_odd - discern if int is odd
 * @n: the integer
 *
 * Return: 1 if true else 0
 */
int _is_odd(const long int n)
{
	return (n % 2);
}

/**
 * _pow - exponentiate
 * @b: base
 * @i: iterations
 *
 * Return: exponentiated value (unsigned int)
 */
unsigned int _pow(const int b, int i)
{
	unsigned int result = 1;

	while (i--)
		result *= b;
	return (result);
}

/**
 * get_bit - get bit at given index
 * @n: integer from which indexes are sourced
 * @index: desired index
 *
 * Return: value of bit else -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p = _pow(2, index);

	if (p > n)
		return (-1);

	if (!index)
		return (_is_odd(n));

	while (n >= p)
		n = (n >> index) & 1;

	return (n);
}
