#include "main.h"

/**
 * _puts - show string
 * @str: string in question
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
