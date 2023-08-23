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
 * _strncat - append n chars to a string
 * @dest: left operand being added to
 * @src: right operand
 * @n: number of chars to be added
 *
 * Return: Pointer to @dest (char *)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);
	int iter;

	for (iter = 0; iter < n && iter < len_src; iter++)
		dest[len_dest + iter] = src[iter];

	dest[len_dest + iter] = '\0';

	return (dest);
}

/**
 * test_strncat_len_greater_than_src - add greater chars than src has
 *
 * Return: void
 */
void test_strncat_len_greater_than_src(void)
{
	int len = 15, iter = 0;

	char *expected = "Hello WWorld!\n\0";
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	char *ptr;

	ptr = _strncat(s1, s2, 1);
	ptr = _strncat(s1, s2, 1024);

	for (; iter < len; iter++)
	{
		assert(ptr[iter] == expected[iter]);
		assert(ptr[iter] == s1[iter]);
	}

	assert(ptr[len - 1] == '\0');
}

/**
 * test_strncat_len_less_than_src - add fewer chars than src has
 *
 * Return: void
 */
void test_strncat_len_less_than_src(void)
{
	int len = 8, iter = 0;

	char *expected = "Hello W\0";
	char s1[98] = "Hello ";

	char *ptr;

	ptr = _strncat(s1, "World!\n", 1);

	for (; iter < len; iter++)
	{
		assert(ptr[iter] == expected[iter]);
		assert(ptr[iter] == s1[iter]);
	}

	assert(ptr[len - 1] == '\0');
}
