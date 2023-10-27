#include "main.h"

/**
 * _isdigit - discern if char is digit
 * @c: character being checked
 *
 * Return: 1 if True
 *	   0 if False
 */
int _isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
}
