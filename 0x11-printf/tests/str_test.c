#include "main_test.h"

/**
 * no_va_char_test - no anon args
 *
 * Return: void
 */
void no_va_char_test(void)
{
	int count_00, count_01;

	puts("\n========================================");
	puts("============   NO SPECIFIER   ==========");
	puts("========================================\n");

	count_00 = printf("!");
	printf("  --  Expect Count: %d\n", count_00);

	count_01 = _printf("!");
	printf("  --  Actual Count: %d\n", count_01);
}

/**
 * no_va_str_test - no anon args
 *
 * Return: void
 */
void no_va_str_test(void)
{
	int count_00, count_01;

	puts("\n========================================");
	puts("============   NO SPECIFIER   ==========");
	puts("========================================\n");

	count_00 = printf("12345");
	printf("  --  Expect Count: %d\n", count_00);

	count_01 = _printf("12345");
	printf("  --  Actual Count: %d\n", count_01);
}

/**
 * spec_percent_test - percent char
 *
 * Return: void
 */
void spec_percent_test(void)
{
	int count_00, count_01;

	puts("\n========================================");
	puts("============  %% SPECIFIER   ===========");
	puts("========================================\n");

	count_00 = printf("12%%");
	printf("  -- Expect Count: %d\n", count_00);

	count_01 = _printf("12%%");
	printf("  -- Actual Count: %d\n", count_01);
}
