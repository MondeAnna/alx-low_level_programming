#include "main.h"

/**
 * va_bin - print int from va list
 * @args: var args
 *
 * Return: digit count of int (int)
 */
int va_bin(va_list *args)
{
	int num = va_arg(*args, int);
	int base = 2;

	return (helper_uint(num, base));
}
