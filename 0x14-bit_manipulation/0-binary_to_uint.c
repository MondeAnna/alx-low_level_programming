#include "main.h"
#include <stdio.h>

/**
 * _is_binary - ensure chars are `0` or 11`
 * @b: string literal of binary digit
 *
 * Return: 1 if true else 0 (int)
 */
int _is_binary(const char *b)
{
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	return (1);
}

/**
 * _pow - exponentiate
 * @b: base
 * @i: iterations
 *
 * Return: exponentiated value (unsigned int)
 */
unsigned int _pow(const int b, int i)
{
	unsigned int result = 1;

	while (i--)
		result *= b;
	return (result);
}

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	short int i = 0;

	if (s == NULL)
		return (i);

	while (*s++)
		i++;
	return (i);
}

/**
 * binary_to_uint - convert binary to int
 * @b: string literal of binary digit
 *
 * Return: converted digit else 0 if error
 * with input (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = _strlen(b);

	if (b == NULL)
		return (0);

	if (!len || !_is_binary(b))
		return (0);

	if (*b == '0')
		return (binary_to_uint(++b));

	return (binary_to_uint(++b) + _pow(2, len - 1));
}
