#include "main.h"

/**
 * print_last_digit - Show last digit of number
 * @n: number who's last digit is to be shown
 *
 * Return: last digit of @n (int)
 */
int print_last_digit(int n)
{
	const char ZERO = '0';
	char c;

	n = n % 10;
	n = n >= 0 ? n : -n;

	c = ZERO + n;
	_putchar(c);

	return (n);
}
