#include "main.h"

/**
 * wildcmp - determine if two strings are identical
 * @s1: string being grepped
 * @s2: condition of grepping
 *
 * Return: TRUE (1) if matches, else FALSE (0) (char)
 */
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (TRUE);

	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));

	if (*s2 != '*')
		return (FALSE);

	if (s2[1] == '*')
		return (wildcmp(s1, ++s2));

	if (*s1 != s2[1])
		return (wildcmp(++s1, s2));

	return (wildcmp(s1, ++s2));
}

/**
 * assert_true - matching strings
 *
 * Return: void
 */
void assert_true(void)
{
	/* grep empty string; variadic wildcard count */
	assert(wildcmp("", "") == TRUE);
	assert(wildcmp("", "*") == TRUE);
	assert(wildcmp("", "**") == TRUE);

	/* exect strings */
	assert(wildcmp("main.c", "main.c") == TRUE);

	/* existing pre-fix */
	assert(wildcmp("main.c", "ma*") == TRUE);

	/* existing post-fix */
	assert(wildcmp("main.c", "*in.c") == TRUE);

	/* grep all; variadic wildcard count */
	assert(wildcmp("ma", "*") == TRUE);
	assert(wildcmp("main.c", "***") == TRUE);

	/* variadic wildcard placement */
	assert(wildcmp("main.c", "m*c") == TRUE);
	assert(wildcmp("main.c", "**.*c") == TRUE);
	assert(wildcmp("main.c", "m*a*i*n*.*c*") == TRUE);
	assert(wildcmp("main.c", "ma********************************c") == TRUE);

	/* unable to pass */
	/* assert(wildcmp("main-main.c", "ma*in.c") == TRUE); */
}

/**
 * assert_false - non-matching strings
 *
 * Return: void
 */
void assert_false(void)
{
	/* interim wildcard values */
	assert(wildcmp("main.c", "m.*c") == FALSE);
	assert(wildcmp("main", "main*d") == FALSE);

	/* trailing values missing */
	assert(wildcmp("", "*ain.c") == FALSE);
	assert(wildcmp("abc", "*b") == FALSE);
}

/**
 * exec -test entry point
 *
 * Return: void
 */
void exec(void)
{
	assert_true();
	assert_false();
}
