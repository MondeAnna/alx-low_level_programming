#include "main.h"

/**
 * print_rev - show reversed string
 * @s: string in question
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *rev = s;

	while (*rev)
		rev++;

	while (s != rev--)
		_putchar(*rev);

	_putchar('\n');
}
