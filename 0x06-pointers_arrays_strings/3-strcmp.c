#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
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
 *
 * Description: Compares two strings, returning
 *   - zero if the strings are the same
 *   - a negative value if s1 comes before s2,
 *     lexicographically
 *   - a positive value if s1 comws after s2,
 *     lexicographically
 *
 * Return: if equal -> 0
 *         else -> integral difference between
 *                 the first differing chars
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

/**
 * test_strcmp_equal_char_len - strings with equal lengths
 *
 * Description: expect the numeric difference between the first chars
 * sharing the same index position, whose difference is not zero; if none
 * are found, then a return value of zero is expected
 *
 * Return: void
 **/
void test_strcmp_equal_char_len(void)
{
	char *diff_char_first = "cord";
	char *diff_char_second = "core";
	char *diff_char_third = "code";

	char *same_char_first = "Hahah";
	char *same_char_second = "Hahah";

	assert(_strcmp(diff_char_first, diff_char_second) == -1);
	assert(_strcmp(diff_char_second, diff_char_first) == 1);
	assert(_strcmp(diff_char_second, diff_char_third) == 14);
	assert(_strcmp(diff_char_third, diff_char_second) == -14);

	assert(_strcmp(same_char_first, same_char_first) == 0);
	assert(_strcmp(same_char_first, same_char_second) == 0);
	assert(_strcmp(same_char_second, same_char_first) == 0);
}

/**
 * test_strcmp_variadic_char_len - strings with differing lengths
 *
 * Description: while within the char count of both strings,
 * chars are equated as per index position, should chars be
 * the same, the following chars are compared
 *
 * Should chars be the same until one char runs to its end,
 * then the int value of the char being equated to a null byte
 * ('\0') is expected
 *
 * Return: void
 **/
void test_strcmp_variadic_char_len(void)
{
	char *diff_char_first = "in";
	char *diff_char_second = "the";

	char *same_char_first = "Ha";
	char *same_char_second = "Hah";

	assert(_strcmp(diff_char_first, diff_char_second) == -11);
	assert(_strcmp(diff_char_second, diff_char_first) == 11);

	assert(_strcmp(same_char_first, same_char_second) == -104);
	assert(_strcmp(same_char_second, same_char_first) == 104);
}
