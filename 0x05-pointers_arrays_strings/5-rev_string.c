#include "main.h"

/**
 * swap - swap two chars
 * @a: left operand
 * @b: right operand
 *
 * Return: void
 */
void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * rev_string - reverse a string
 * @s: string in question
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *e = s;

	while (*e)
		e++;

	while (s < --e)
		swap(s++, e);
}
