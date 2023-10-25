#include "main.h"

/**
 * factorial - get factorial
 * @n: integral value of factorial
 *
 * Return: factorial (int)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	/* indicate error */
	assert(factorial(-1024) == -1);
	assert(factorial(-1) == -1);

	/* fundamental value */
	assert(factorial(0) == 1);
	assert(factorial(1) == 1);

	/* expected case of n(n+1)! */
	assert(factorial(5) == 120);
	assert(factorial(10) == 3628800);
}
