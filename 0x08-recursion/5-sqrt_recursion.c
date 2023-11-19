#include <stdio.h>


#include "main.h"

/**
 * _sqrt_iterator - recursively iteraters through divisor
 * @num: number being divided
 * @div: divisor
 *
 * Return: natural root else -1
 */
int _sqrt_iterator(int num, int div)
{
	if (num == div * div)
		return (div);

	if (div == 3)
		return (-1);

	return (_sqrt_iterator(num, --div));
}

/**
 * _sqrt_recursion - determine natural square-root
 * @n: integer who's root is being determined
 *
 * Return: natural root else -1 (int)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (n);

	if (n < 4)
		return (-1);

	if (n == 4)
		return (2);

	return (_sqrt_iterator(n, n / 2));
}

/**
 * natural - matching strings
 *
 * Return: void
 */
void natural(void)
{
	assert(_sqrt_recursion(0) == 0);
	assert(_sqrt_recursion(1) == 1);
	assert(_sqrt_recursion(4) == 2);
	assert(_sqrt_recursion(9) == 3);
	assert(_sqrt_recursion(49) == 7);
	assert(_sqrt_recursion(225) == 15);
}

/**
 * no_natural - non-matching strings
 *
 * Return: void
 */
void no_natural(void)
{
	assert(_sqrt_recursion(-1) == -1);
	assert(_sqrt_recursion(2) == -1);
	assert(_sqrt_recursion(11) == -1);
	assert(_sqrt_recursion(21) == -1);
	assert(_sqrt_recursion(102) == -1);
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	natural();
	no_natural();
}
