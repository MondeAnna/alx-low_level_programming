#include "main_test.h"

/**
 * spec_b_test - int as anon arg to bin
 *
 * Return: void
 */
void spec_b_test(void)
{
	int count_00;

	puts("\n========================================");
	puts("============   B SPECIFIER   ===========");
	puts("========================================\n");

	puts("1100010  --  Expect Count: 7");

	count_00 = _printf("%b", 98);
	printf("  --  Actual Count: %d\n", count_00);
}

/**
 * spec_d_test - int as anon arg
 *
 * Return: void
 */
void spec_d_test(void)
{
	int count_00, count_01;

	puts("\n========================================");
	puts("============   D SPECIFIER   ===========");
	puts("========================================\n");

	count_00 = printf("%d", -56789);
	printf("  --  Expect Count: %d\n", count_00);

	count_01 = _printf("%d", -56789);
	printf("  --  Actual Count: %d\n", count_01);
}

/**
 * spec_i_test - int as anon arg
 *
 * Return: void
 */
void spec_i_test(void)
{
	int count_00, count_01;

	puts("\n========================================");
	puts("============   I SPECIFIER   ===========");
	puts("========================================\n");

	count_00 = printf("01234%i", 56789);
	printf("  --  Expect Count: %d\n", count_00);

	count_01 = _printf("01234%i", 56789);
	printf("  --  Actual Count: %d\n", count_01);
}
