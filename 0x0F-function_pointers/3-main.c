#include "3-calc.h"

/**
 * main - entry point
 * @argc: cli argument count
 * @argv: cli argument values
 *
 * Return: EXIT_SUCCESS on success else EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	int is_zero_div, is_zero_mod;
	int calc, num1, num2;
	int (*f)(int, int);

	char *err = "Error";
	char *op;

	if (argc != 4)
	{
		puts(err);
		return (98);
	}

	op = argv[2];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* strcmp returns zero for equal values */
	is_zero_div = !strcmp(op, "/") && !num2;
	is_zero_mod = !strcmp(op, "%") && !num2;

	if (is_zero_div || is_zero_mod)
	{
		puts(err);
		return (100);
	}

	f = get_op_func(op);

	if (f == NULL)
	{
		puts(err);
		return (99);
	}

	calc = f(num1, num2);
	printf("%d\n", calc);

	return (EXIT_SUCCESS);
}
