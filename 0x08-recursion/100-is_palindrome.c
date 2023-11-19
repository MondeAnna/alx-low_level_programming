#include "main.h"

/**
 * _get_last_char - get last char of str
 * @s: string in question
 *
 * Return: character (char *)
 */
char *_get_last_char(char *s)
{
	if (!(*s))
		return (--s);
	return (_get_last_char(++s));
}

/**
 * _iterator - recursively iterates through str
 * @begin: start of string
 * @end: end of string
 *
 * Return: TRUE (1) if is palindrome, else FALSE (0) (int)
 */
int _iterator(char *begin, char *end)
{
	if (begin == end || begin > end)
		return (TRUE);

	if (*begin != *end)
		return (FALSE);

	return (_iterator(++begin, --end));
}

/**
 * is_palindrome - determine if str is a palindrome
 * @s: string in question
 *
 * Return: TRUE (1) if is palindrome, else FALSE (0) (int)
 */
int is_palindrome(char *s)
{
	char *begin = s;
	char *end = _get_last_char(s);

	return (_iterator(begin, end));
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	assert(is_palindrome("abcdecba") == 0);
	assert(is_palindrome("test") == 0);
	assert(is_palindrome("level") == 1);
	assert(is_palindrome("redder") == 1);
	assert(is_palindrome("step on no pets") == 1);
}
