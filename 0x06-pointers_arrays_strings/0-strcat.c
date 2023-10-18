#include "main.h"

/**
 * _strcat - append one string to another
 * @dest: left operand being added to
 * @src: right operand
 *
 * Return: Pointer to @dest (char *)
 */
char *_strcat(char *dest, char *src)
{
	char *root = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = *src;
	dest = root;

	return (dest);
}

/**
 * test_strcat - test `_strcat` function
 *
 * Return: void
 */
void test_strcat(void)
{
	int len = 14, iter = 0;
	char *expected = "Hello World!\n\0";
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strcat(s1, s2);

	for (; iter < len; iter++)
	{
		assert(ptr[iter] == expected[iter]);
		assert(ptr[iter] == s1[iter]);
	}
}
