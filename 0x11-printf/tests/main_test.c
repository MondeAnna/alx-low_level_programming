#include "main_test.h"

/**
 * main - entry point
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	no_va_char_test();
	no_va_str_test();

	spec_percent_test();
	spec_c_test();
	spec_s_test();

	spec_b_test();
	spec_d_test();
	spec_i_test();
	spec_o_test();
	spec_x_test();

	return (EXIT_SUCCESS);
}
