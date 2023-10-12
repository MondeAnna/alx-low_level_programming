#include "main.h"

/**
 * print_most_numbers - show base 10 digits -> exclusions made
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		if ((digit != '2') && (digit != '4'))
			_putchar(digit);

	_putchar('\n');
}
