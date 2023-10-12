#include <assert.h>
#include <stdio.h>

/**
 * get_largest_prime - get lagest prime
 * @n: number being factorised
 *
 * Return: largest prime (long int)
 */
long int get_largest_prime(long int n)
{
	int prime = 2;

	while (n > 1)
		if (n % prime == 0)
			n /= prime;
		else
			prime++;

	return (prime);
}

/**
 * test_get_largest_prime - assert returned prime
 *
 * Return: void
 */
void test_get_largest_prime(void)
{
	const long int TEST01 = 1231952;
	int EXPECTED01 = 2081;

	int TEST02 = 28;
	int EXPECTED02 = 7;

	int TEST03 = 110;
	int EXPECTED03 = 11;

	assert(get_largest_prime(TEST01) == EXPECTED01);
	assert(get_largest_prime(TEST02) == EXPECTED02);
	assert(get_largest_prime(TEST03) == EXPECTED03);

}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	const long int NUM = 612852475143;
	long int result;

	test_get_largest_prime();
	result = get_largest_prime(NUM);

	printf("%ld\n", result);

	return (0);
}
