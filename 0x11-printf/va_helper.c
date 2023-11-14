#include "main.h"

/**
 * helper_int - print int
 * @num: integer
 * @base: base
 *
 * Return: digit count of int
 */
int helper_int(int num, const int base)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num >= base)
		count += helper_int(num / base, base);

	count += _putchar('0' + (num % base));

	return (count);
}

/**
 * helper_uint - print int
 * @num: integer
 * @base: base
 *
 * Return: digit count of int
 */
int helper_uint(unsigned int num, const unsigned int base)
{
	int count = 0;

	if (num >= base)
		count += helper_uint(num / base, base);

	count += _putchar('0' + (num % base));

	return (count);
}
