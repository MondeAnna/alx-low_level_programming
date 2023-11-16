#include "main.h"

/**
 * va_uint - print int
 * @args: va list
 *
 * Return: digit count of int (int)
 */
int va_uint(va_list *args)
{
	unsigned int num = va_arg(*args, int);
	int base = 10;

	return (helper_uint(num, base));
}
