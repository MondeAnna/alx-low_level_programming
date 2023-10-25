#include "main.h"

/**
 * _print_rev_recursion - cli reversed string printout
 * @s: string in question
 *
 * Return:
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;

	_print_rev_recursion(++s);

	--s;
	write(1, s, 1);
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	_print_rev_recursion("\nColton Walker");
	_print_rev_recursion("\ngnirts si a sihT");
	_print_rev_recursion("\nThis is a reversed string");
}
