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
 * _strdup - duplicate string to dynamically allocated memory
 * @str: string in question
 *
 * Return: pointer to new string (char *)
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *str_new;
	unsigned int iter;

	if (!str)
		return (str);

	if (!(*str))
		len  = 1;
	else
		len  = _strlen(str);

	str_new = malloc((sizeof(*str) * len) + sizeof(*str));

	if (!str_new)
		return (str_new);

	for (iter = 0; iter < len; iter++)
		str_new[iter] = str[iter];

	return (str_new);
}
