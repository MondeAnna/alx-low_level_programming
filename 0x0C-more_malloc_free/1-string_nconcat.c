#include "main.h"

/**
 * _strlen - get length of string
 * @str: string in question
 *
 * Return: length of string (unsigned int)
 */
unsigned int _strlen(const char *str)
{
	unsigned int count = 0;

	while (*str++)
		count++;

	return (count);
}

/**
 * string_nconcat - cancatenate two strings
 * @s1: left operand
 * @s2: right operand
 * @n: number of bytes from s2 to concatenate
 *
 * Return: concatenated string (char *)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size, i1, i2, l1, l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	n = n <= l2 ? n : l2;

	size = l1 + n + 1;

	str = malloc(size);

	if (!str)
		return (NULL);

	for (i1 = 0; i1 < l1; i1++)
		str[i1] = s1[i1];

	for (i2 = 0; i2 < n; i1++, i2++)
		str[i1] = s2[i2];

	str[i1] = '\0';

	return (str);
}
