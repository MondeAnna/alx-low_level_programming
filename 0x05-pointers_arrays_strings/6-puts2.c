#include "main.h"

/**
 * puts2 - show oddly indexed `chars` in `str`
 * @str: string in question
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);

		if (*str)
			str++;
	}

	_putchar('\n');
}
