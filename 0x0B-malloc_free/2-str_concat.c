#include "main.h"

/**
 * _strlen - get length of string
 * @str: string in question
 *
 * Return: length of string (int)
 */
int _strlen(const char *str)
{
	unsigned int count = 0;

	while (*str++)
		count++;

	return (count);
}

/**
 * str_concat - concatenate two strings
 * @s1: left operand
 * @s2: right operand
 *
 * Return: concatenated string (char *)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int iter1 = 0, iter2 = 0;
	unsigned int len1, len2;
	char *str;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = malloc((sizeof(*s1) * (len1 + len2)) + sizeof(*s1));

	if (!str)
		return (NULL);

	if (*s1)
		for (iter1 = 0; iter1 < len1; iter1++)
			str[iter1] = s1[iter1];

	for (iter2 = 0; iter2 < len2; iter1++, iter2++)
		str[iter1] = s2[iter2];

	return (str);
}
