#include "main.h"

/**
 * print_line - show underscore lines
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
