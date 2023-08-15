#include "main.h"

/**
 * _islower - Determine if char is lowercased
 * @c: the character to check
 *
 * Return: 1 if True
 *	   0 if False
 */
int _islower(int c)
{
	return (('a' <= c) && (c <= 'z'));
}
