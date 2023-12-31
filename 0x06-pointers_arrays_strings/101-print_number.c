#include "main.h"

/**
 * print_number - show an integer
 * @n: integer in question
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
