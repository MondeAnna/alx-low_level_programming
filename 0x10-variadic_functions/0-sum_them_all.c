#include "variadic_functions.h"

/**
 * sum_them_all - sum varied arguments
 * @n: count of operands
 * @...: anonymous args
 *
 * Return: summation (int)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int iter;
	int total;
	va_list args;

	if (!n)
		return (0);

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
		total += va_arg(args, int);

	va_end(args);

	return (total);
}
