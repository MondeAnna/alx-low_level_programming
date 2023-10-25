#include "main.h"

/**
 * _iterator_n - recursively iteraters through modularor
 * @num: number being divided
 * @mod: modulator in question
 *
 * Return: TRUE (1) if prime else FALSE (0) (int)
 */
int _iterator_n(int num, int mod)
{
	if (mod == 2)
		return (TRUE);

	if (num % mod)
		return (_iterator_n(num, --mod));

	return (FALSE);
}

/**
 * is_prime_number - determine if int is prime
 * @n: int in question
 *
 * Return: TRUE (1) if so else FALSE (0) (int)
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (TRUE);

	if (n <= 1 || !(n % 2))
		return (FALSE);

	return (_iterator_n(n, n / 2));
}

/**
 * assert_true - matching strings
 *
 * Return: void
 */
void assert_true(void)
{
	assert(is_prime_number(2));
	assert(is_prime_number(7));
	assert(is_prime_number(11));
	assert(is_prime_number(23));
}

/**
 * assert_false - non-matching strings
 *
 * Return: void
 */
void assert_false(void)
{
	assert(!is_prime_number(-1));
	assert(!is_prime_number(0));
	assert(!is_prime_number(1));
	assert(!is_prime_number(4));
	assert(!is_prime_number(8));
	assert(!is_prime_number(9));
	assert(!is_prime_number(49));
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	assert_true();
	assert_false();
}
