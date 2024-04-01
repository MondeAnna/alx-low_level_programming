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
		{'c', var_char},
		{'d', var_int},
		{'i', var_int},
		{'s', var_str},
		{'\0', NULL}
	};

	int i = 0;

	while (prints[i].spec)
	{
		if (spec == prints[i].spec)
			break;
		i++;
	}

	return (prints[i].var_func);
}
