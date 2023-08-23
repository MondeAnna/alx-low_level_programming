#include "main.h"

/**
 * _islower - discern if char is lowercased
 * @c: character being checked
 *
 * Return: 1 if True
 *	   0 if False
 */
int _islower(int c)
{
	return (('a' <= c) && (c <= 'z'));
}

/**
 * _isseparator - discern if char is seperator
 * @c: string in question
 *
 * Return: 0 if False
 *         1 if True
 */
int _isseparator(const char c)
{
	char sep[] = {
		',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\t', '\n', ' '
	};

	int len = sizeof(sep) / sizeof(char);
	int iter = 0;

	for (; iter < len; iter++)
		if (c == sep[iter])
			return (1);

	return (0);
}

/**
 * cap_string - capitalise all words in string
 * @str: string in question
 *
 * Return: altered string (char *)
 */
char *cap_string(char *str)
{
	char *root = str, *prev;
	int diff = 'a' - 'A';

	while (*str++ != '\0')
	{
		prev = str - 1;

		/* for some reason, \t is expected to just be a space*/
		if (*prev == '\t')
			*prev = ' ';

		if (_isseparator(*prev) && _islower(*str))
			*str -= diff;
	}

	str = root;

	if (_islower(*str))
		*str -= diff;

	return (str);
}

/**
 * test_cap_string_special_char - special char separators
 *
 * Return: Always 0.
 */
void test_cap_string_special_char(void)
{
	char *comma_period_expected = "In,The.Beginning";
	char comma_period[] = "In,the.beginning";

	char *dbl_quotes_expected = "In\"The\"Beginning";
	char dbl_quotes[] = "In\"The\"Beginning";

	char *excl_quest_expected = "In!The?Beginning";
	char excl_quest[] = "In!The?Beginning";

	char *line_feed_expected = "In\nThe\nBeginning";
	char line_feed[] = "In\nthe\nbeginning";

	char *semi_colon_expected = "In;The;Beginning";
	char semi_colon[] = "In;The;Beginning";

	char *curlies_expected = "In{The}Beginning";
	char curlies[] = "In{The}Beginning";

	char *parentheses_expected = "In)The(Beginning";
	char parentheses[] = "In)The(Beginning";

	int len = sizeof(comma_period) / sizeof(char);
	int iter = 0;

	for (; iter < len; iter++)
	{
		assert(cap_string(comma_period)[iter] == comma_period_expected[iter]);
		assert(cap_string(curlies)[iter] == curlies_expected[iter]);
		assert(cap_string(dbl_quotes)[iter] == dbl_quotes_expected[iter]);
		assert(cap_string(excl_quest)[iter] == excl_quest_expected[iter]);
		assert(cap_string(line_feed)[iter] == line_feed_expected[iter]);
		assert(cap_string(parentheses)[iter] == parentheses_expected[iter]);
		assert(cap_string(semi_colon)[iter] == semi_colon_expected[iter]);
	}
}

/**
 * test_cap_string_whitespace - whitespace separators
 *
 * Return: Always 0.
 */
void test_cap_string_whitespace(void)
{
	char *expected = "In The Beginning";

	char space[] = "In the beginning";
	char space_02[] = "in the beginning";
	char tab[] = "In\tthe\tbeginning";

	int len = sizeof(space) / sizeof(char);
	int iter = 0;

	for (; iter < len; iter++)
	{
		assert(cap_string(space)[iter] == expected[iter]);
		assert(cap_string(space_02)[iter] == expected[iter]);
		assert(cap_string(tab)[iter] == expected[iter]);
	}

}
