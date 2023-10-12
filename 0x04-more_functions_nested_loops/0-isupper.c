#include "main.h"

/**
 * _isupper - check if char is uppercased
 * @c: character being checked
 *
 * Return: 1 if True
 *	   0 if False
 */
int _isupper(int c)
{
	return (('A' <= c) && (c <= 'Z'));
}
