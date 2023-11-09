#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: self explanatory
 * @n: anonymous variable count
 * @...: anonymous variables
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *sep = separator ? separator : " ";
	unsigned int iter;
	char *value;

	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		value = va_arg(args, char *);
		value = value ? value : "(nil)";

		printf("%s", value);

		if (iter < n - 1)
			printf("%s", sep);
	}

	putchar('\n');

	va_end(args);
}
