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
 * _strcat - concatenate two strings
 * @s1: left operand
 * @s2: right operand
 *
 * Return: concatenated string (char *)
 */
char *_strcat(char *s1, char *s2)
{
	unsigned int iter1 = 0, iter2 = 0;
	unsigned int len1, len2, len_total;
	char *str;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len_total = len1 + len2;

	str = malloc((sizeof(*s1) * len_total) + sizeof(*s1));

	if (!str)
		return (NULL);

	for (iter1 = 0; iter1 < len1; iter1++)
		str[iter1] = s1[iter1];

	for (iter2 = 0; iter2 < len2; iter1++, iter2++)
		str[iter1] = s2[iter2];

	str[iter1] = '\0';

	return (str);
}

/**
 * argstostr - concatenate multiple strings into one
 * @ac: number of strings
 * @av: strings in questions
 *
 * Return: concatenated string (char *)
 */
char *argstostr(int ac, char **av)
{
	int iter, num_of_chars;
	char *str, *temp_concat, *temp_str;

	if (!ac || !av)
		return (NULL);

	for (iter = 0; iter < ac; iter++)
	{
		temp_str = av[iter];
		num_of_chars += _strlen(temp_str);
	}

	for (iter = 0; iter < ac; iter++)
	{
		/* address new line after each argument*/
		temp_str = av[iter];
		temp_concat = _strcat(temp_str, "\n");

		str = _strcat(str, temp_concat);

		free(temp_concat);
	}

	return (str);
}
