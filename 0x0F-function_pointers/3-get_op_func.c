#include "3-calc.h"

/**
 * get_op_func - select operational function
 * @s: provided operator
 *
 * Return: pointer to operational function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
			break;
		i++;
	}

	return (ops[i].f);
}
