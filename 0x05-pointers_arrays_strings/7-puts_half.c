#include "main.h"

/**
 * puts_half - show second half of string
 * @str: string in question
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *end = str;

	while (*end)
		end++;

	while (str <= --end)
		str++;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
