#include "main.h"

/**
 * leet - encode string using 1337
 * @str: string inquestion
 *
 * Return: encoded string (char *0
 */
char *leet(char *str)
{
	const char upper[] = "AEOLT";
	const char *lower = "aeolt";
	const char *digit = "43017";

	int len = sizeof(upper) / sizeof(char);
	char *root = str;
	int iter;


	while (*str != '\0')
	{
		for (iter = 0; iter < len; iter++)
			if ((*str == upper[iter]) || (*str == lower[iter]))
				*str = digit[iter];
		str++;
	}

	str = root;

	return (str);
}

/**
 * test_leet_consonants - ensure alphabets encoded correctly
 *
 * Return: void
 */
void test_leet_consonants(void)
{
	char *consonants_expected = "Un7i1 i7ching f1ux / burn";
	char consonants[] = "Until itching flux / burn";
	char *result = leet(consonants);

	int len = sizeof(consonants) / sizeof(char);
	int iter = 0;

	for (; iter < len; iter++)
	{
		assert(result[iter] == consonants_expected[iter]);
		assert(result[iter] == consonants[iter]);
	}
}

/**
 * test_leet_vowels - ensure vowels encoded correctly
 *
 * Return: void
 */
void test_leet_vowels(void)
{
	char *vowels_expected = "4g4in, 0v3r H34V3N's G00, m4n m4rch";
	char vowels[] = "Again, over HEAVEN's GOO, man march";
	char *result = leet(vowels);

	int len = sizeof(vowels) / sizeof(char);
	int iter = 0;

	for (; iter < len; iter++)
	{
		assert(result[iter] == vowels_expected[iter]);
		assert(result[iter] == vowels[iter]);
	}
}
