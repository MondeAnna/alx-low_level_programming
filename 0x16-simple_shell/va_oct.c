#include "_printf.h"

/**
 * va_oct - print oct from va list
 * @args: var args
 * Return: count of digits in oct (int)
 */
int va_oct(va_list *args)
{
	int num = va_arg(*args, int);
	int base = 8;

	return (helper_int(num, base));
}
