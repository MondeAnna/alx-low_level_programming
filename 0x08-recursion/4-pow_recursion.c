#include "main.h"

/**
 * _pow_recursion - exponentiation
 * @x: base
 * @y: power
 *
 * Return: base exponentiated by power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	return (x * _pow_recursion(x, --y));
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	/* positive base; negative power */
	assert(_pow_recursion(1, -1) == -1);

	/* positive base; zero as power */
	assert(_pow_recursion(2, 0) == 1);

	/* positive base; positive powers */
	assert(_pow_recursion(3, 1) == 3);
	assert(_pow_recursion(4, 2) == 16);

	/* negative base; negative power */
	assert(_pow_recursion(-5, -4) == -1);

	/* negative base; zero as power */
	assert(_pow_recursion(-6, 0) == 1);

	/* negative base; positive powers */
	assert(_pow_recursion(-7, 5) == -16807);
	assert(_pow_recursion(-8, 6) == 262144);
}
