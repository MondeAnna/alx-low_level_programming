#include "main.h"

/**
 * _strlen - len of str
 * @str: str
 *
 * Return: len of str (int)
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);
	return (_strlen(++str) + 1);
}

/**
 * va_char - print char from va list
 * @args: var args
 *
 * Return: 1 on success else -1 (int)
 */
int va_char(va_list *args)
{
	char c = va_arg(*args, int);

	return (_putchar(c));
}

/**
 * va_str - print str from va list
 * @args: var args
 *
 * Return: str len on success else
 * -1 (int)
 */
int va_str(va_list *args)
{
	char *str = va_arg(*args, char *);
	int len = _strlen(str);

	return (write(DESCRIPTOR, str, len));
}

/**
 * get_print - select specifier related printer
 * @spec: specifier
 *
 * Return: function pointer to printer
 */
int (*get_print(char spec))(va_list *args)
{
	print_t prints[] = {
		{'c', va_char},
		{'s', va_str},
		{'\0', NULL}
	};

	int i = 0;

	while (prints[i].spec)
	{
		if (spec == prints[i].spec)
			break;
		i++;
	}

	return (prints[i].va_func);
}
