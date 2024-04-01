#include "main.h"

/**
 * _printf - print formated string
 * @format: format
 * @...: anon args
 *
 * Return: num of printed bytes, bar
 * null byte
 */
int _printf(const char *format, ...)
{
	int (*print)(va_list *args);
	int count = 0;
	va_list args;

	if (!format)
		return (EXIT_FAIL);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format++);
			count++;
			continue;
		}

		format++;

		if (*format == '%')
		{
			_putchar(*format++);
			count++;
			continue;
		}

		print = get_print(*format);
		count += print(&args);

		format++;
	}

	va_end(args);

	return (count);
}

/**
 * _putchar - write char to stdout
 * @c: char
 *
 * Return: 1 on succes else -1
 */
int _putchar(char c)
{
	return (write(DESCRIPTOR, &c, ONE));
}
