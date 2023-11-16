#include "main.h"

/**
 * va_int - print int from va list
 * @args: var args
 *
 * Return: digit count of int (int)
 */
int va_int(va_list *args)
{
	int num = va_arg(*args, int);

	return (helper_int(num));
}

/**
 * helper_int - print int
 * @int: base 10 int
 *
 * Return: digit count of int
 */
int helper_int(int num)
{
	const int base = 10;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num >= base)
		count += helper_int(num / base);

	count += _putchar('0' + (num % base));

	return (count);
}
