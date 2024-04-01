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

	while (*s)
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
