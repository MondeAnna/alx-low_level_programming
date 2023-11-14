#include "main.h"

/**
 * va_hex_lower - print hex from va list
 * @args: var args
 *
 * Return: digit count of hex (int)
 */
int va_hex_lower(va_list *args)
{
	unsigned int num = va_arg(*args, unsigned int);
	char spec = 'x';

	return (helper_hex(spec, num));
}

/**
 * va_hex_upper - print hex from va list
 * @args: var args
 *
 * Return: digit count of hex (int)
 */
int va_hex_upper(va_list *args)
{
	unsigned int num = va_arg(*args, unsigned int);
	char spec = 'X';

	return (helper_hex(spec, num));
}

/**
 * helper_hex - prints integer as hex
 * @specifier: hex casing
 * @num: unsigned integer
 *
 * Return: hex char count (int)
 */
int helper_hex(const char specifier, unsigned int num)
{
	const unsigned int base = 16;
	int count = 0;
	int len = 1;

	char hex_start;
	char digit;

	if (num >= base)
		count += helper_hex(specifier, num / base);

	num %= base;

	if (num <= 10)
	{
		digit = '0' + num;
		return (write(DESCRIPTOR, &digit, len) + count);
	}

	hex_start = specifier == 'x' ? 'a' : 'A';
	digit = hex_start + (num % 10);

	return (write(DESCRIPTOR, &digit, len) + count);
}
