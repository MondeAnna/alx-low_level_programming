#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: self explanatory
 * @n: anonymous variable count
 * @...: anonymous variables
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	const char *sep = separator ? separator : " ";
	unsigned int iter;
	int value;

	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		value = va_arg(args, int);

		printf("%d", value);

		if (iter < n - 1)
			printf("%s", sep);
	}

	putchar('\n');

	va_end(args);
}
