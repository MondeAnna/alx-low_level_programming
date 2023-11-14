#include "main.h"

/**
 * va_bin - print int from va list
 * @args: var args
 *
 * Return: digit count of int (int)
 */
int va_bin(va_list *args)
{
	unsigned int num = va_arg(*args, int);
	int base = 2;

	return (helper_uint(num, base));
}

/**
 * var_int - print int from va list
 * @args: var args
 *
 * Return: digit count of int (int)
 */
int va_int(va_list *args)
{
	int num = va_arg(*args, int);
	int base = 10;

	return (helper_int(num, base));
}

/**
 * va_oct - print oct from va list
 * @args: var args
 *
 * Return: digit count of oct (int)
 */
int va_oct(va_list *args)
{
	int num = va_arg(*args, int);
	int base = 8;

	return (helper_int(num, base));
}

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
