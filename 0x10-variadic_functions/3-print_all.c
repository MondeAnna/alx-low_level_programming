#include "variadic_functions.h"

/**
 * print_all - print anythin
 * @format: inputted variable structure
 * @...: anonymous variables
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *tracker = (char *) format;
	char *s;
	int c, i;
	double f;
	va_list args;

	va_start(args, format);
	while (*tracker)
	{
	switch (*tracker++)
	{
		case 's':
			s = va_arg(args, char *);
			if (!s)
				s = "nil";
			printf("%s", s);
			break;
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%i", i);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		default:
			break;
	}
		if (*tracker && (*tracker == 's' || *tracker == 'c' ||
		*tracker == 'i' || *tracker == 'f'))
			printf(", ");
	}
	putchar('\n');
	va_end(args);
}
