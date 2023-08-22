#include "main.h"

/**
 * _isalpha - Determine if char is an alphabet
 * @c: the character being checked
 *
 * Return: 1 if True
 *	   0 if False
 */
int _isalpha(int c)
{
	int lower;
	int upper;

	lower = (('a' <= c) && (c <= 'z'));
	upper = (('A' <= c) && (c <= 'Z'));

	return (lower || upper);
}
