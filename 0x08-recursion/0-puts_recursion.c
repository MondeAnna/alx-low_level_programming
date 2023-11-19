#include "main.h"

/**
 * _puts_recursion - cli string printout
 * @s: string in question
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *n = "\n";

	if (*s)
	{
		write(1, s, 1);
		_puts_recursion(++s);
	}
	else
		write(1, n, 1);
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	_puts_recursion("This is a string");
	_puts_recursion("Prior Empty String:");
	_puts_recursion("");
	_puts_recursion("After Empty String.");
}
