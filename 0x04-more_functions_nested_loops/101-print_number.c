#include "main.h"

/**
 * base_ten_exponent - exponentiates 10 to given power
 * @n: given power
 *
 * Description: usage limited to n >= 1
 * Return: 10^n (int)
 */
int base_ten_exponent(int n)
{
	const int BASE = 10;
	int result = 1;

	if (!n)
		return (result);

	while (n--)
		result *= BASE;

	return (result);
}

/**
 * get_first_digit - discern first digit
 * @n: int to be transformed
 *
 * Return: first_digit (struct)
 */
struct first_digit  get_first_digit(int n)
{
	struct first_digit fd;
	const int TEN = 10;
	int iter = 0;

	while (n >= TEN)
	{
		n /= TEN;
		iter++;
	}

	fd.digit = n;
	fd.exponent_of_ten = iter;

	return (fd);
}

/**
 * print_number - show an int as char
 * @n: int to be transformed
 *
 * Return: void
 */
void print_number(int n)
{
	struct first_digit fd;

	fd.exponent_of_ten = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (fd.exponent_of_ten)
	{
		if (!n || n < base_ten_exponent(fd.exponent_of_ten) / 10)
		{
			_putchar('0');
			fd.exponent_of_ten--;
			continue;
		}

		fd = get_first_digit(n);
		_putchar('0' + fd.digit);

		n -= fd.digit * base_ten_exponent(fd.exponent_of_ten);
	}
}
