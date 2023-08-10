#include "main.h"

/**
 * print_numbers - show base 10 digits
 *
 * Return: void
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		_putchar(digit);
	_putchar('\n');
}
