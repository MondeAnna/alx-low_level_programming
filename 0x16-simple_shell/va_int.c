#include "_printf.h"

/**
 * helper_int - print int
 * @num: integer
 * @base: base
 * Return: count of digits in number (int)
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
 * Return: count of digits in number (int) *
 */
int helper_uint(unsigned int num, const unsigned int base)
{
	int count = 0;

	if (num >= base)
		count += helper_uint(num / base, base);

	count += _putchar('0' + (num % base));

	return (count);
}

/**
 * va_int - print int from va list
 * @args: var args
 * Return: count of digits in number (int)
 */
int va_int(va_list *args)
{
	int num = va_arg(*args, int);
	int base = 10;

	return (helper_int(num, base));
}

/**
 * va_uint - print int
 * @args: va list
 * Return: count of digits in number (int)
 */
int va_uint(va_list *args)
{
	unsigned int num = va_arg(*args, int);
	int base = 10;

	return (helper_uint(num, base));
}

