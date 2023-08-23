#include "main.h"

/**
 * _strlen_recursion - get length of a string
 * @s: string in question
 *
 * Return: length of string (int)
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	char *str = "string";
	char *concept = "In the beginning, Man made Machine";

	assert(_strlen_recursion(str) == 6);
	assert(_strlen_recursion(concept) == 34);
}
