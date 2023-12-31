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
	int base = 10;

	return (helper_int(num, base));
}
