#include "_string.h"

/**
 * _n_chars - count number of occurances of char in string
 * @str: string
 * @char_: character
 * Return: number of occurances (short int)
 */
short int _n_chars(char *str, char char_)
{
	short int n;

	if (!(*str))
		return (0);

	n = *str == char_ ? 1 : 0;

	return (n + _n_chars(++str, char_));
}

/**
 * _strlen - get the length of a string
 * @s: string in question
 * Return: Always 0.
 */
int _strlen(char *s)
{
	short int i = 0;

	while (*s++ != '\0')
		i++;

	return (i);
}

/**
 * _strcmp - compare two strings
 * @s1: left operand
 * @s2: right operand
 * Description: Compares two strings, returning
 *   - zero if the strings are the same
 *   - a negative value if s1 comes before s2,
 *     lexicographically
 *   - a positive value if s1 comws after s2,
 *     lexicographically
 * Return: if equal -> 0 else -> integral difference
 * between the first differing chars
 */
int _strcmp(char *s1, char *s2)
{
	const int len = _strlen(s1);
	int iter = 0;

	for (; iter <= len; iter++)
		if (s1[iter] != s2[iter])
			return (s1[iter] - s2[iter]);
	return (0);
}
