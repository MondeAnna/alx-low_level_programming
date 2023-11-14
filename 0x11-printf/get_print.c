#include "main.h"

/**
 * get_print - select specifier related printer
 * @spec: specifier
 *
 * Return: function pointer to printer
 */
int (*get_print(char spec))(va_list * args)
{
	print_t prints[] = {
		{'b', va_bin},
		{'c', va_char},
		{'d', va_int},
		{'i', va_int},
		{'o', va_oct},
		{'s', va_str},
		{'u', va_uint},
		{'x', va_hex_lower},
		{'X', va_hex_upper},
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
