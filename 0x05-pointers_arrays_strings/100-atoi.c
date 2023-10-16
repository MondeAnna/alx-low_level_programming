#include "main.h"

/**
 * _is_digit - discern if char is digit
 * @c: character being checked
 *
 * Return: 1 if True
 *	   0 if False
 */
int _is_digit(int c)
{
	return (('0' <= c) && (c <= '9'));
}

/**
 * _atoi - get int from string
 * @s: string in question
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int digit_found = 0, negatives = 0, tracker = 1;
	uint32_t integer = 0;

	while (*s != '\0')
	{
		if (digit_found && !_is_digit(*s))
			break;

		if (*s == '-')
		{
			s++;
			negatives++;
			continue;
		}

		if (!_is_digit(*s))
		{
			s++;
			continue;
		}

		digit_found = 1;

		tracker = digit_found ? 10 : 1;

		integer = integer * tracker + (*s - '0');

		s++;
	}

	if (negatives % 2)
		return (-integer);

	return (integer);
}

/**
 * test_digits - digit only strings
 *
 * Return: void
 */
void test_digits(void)
{
	/* expect 0 */
	assert(_atoi("") == 0);
	assert(_atoi("0") == 0);
	assert(_atoi("-0") == 0);
	assert(_atoi("string") == 0);

	/* expect +ve */
	assert(_atoi("6") == 6);
	assert(_atoi("98") == 98);

	/* expect -ve */
	assert(_atoi("-4") == -4);
	assert(_atoi("-402") == -402);

	/* large num */
	assert(_atoi("12345") == 12345);
	assert(_atoi("-748364") == -748364);
	assert(_atoi("-2147483648") == -2147483648);
}

/**
 * test_with_characters - digits and characters in string
 *
 * Return: void
 */
void test_with_characters(void)
{
	/* leading word */
	assert(_atoi("Word 1") == 1);
	assert(_atoi("Word -2") == -2);

	/* trailing word */
	assert(_atoi("3 word") == 3);
	assert(_atoi("-4 word") == -4);

	/* tethered word */
	assert(_atoi("1word") == 1);
	assert(_atoi("word-2") == -2);

	/* multiple negative signs */
	assert(_atoi("--1") == 1);
	assert(_atoi("          ------++++++-----+++++--98") == -98);

	/* multiple integers in string */
	assert(_atoi("  +  +  -  -98 San Francisco, CA 94111 - USA  ") == 98);
	assert(_atoi("---++++ -++ Sui - te -   402 #cisfun 55:)") == 402);
}
