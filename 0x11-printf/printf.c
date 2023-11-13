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
	int count = 0;

	while (*format)
		count += _putchar(*format++);

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
