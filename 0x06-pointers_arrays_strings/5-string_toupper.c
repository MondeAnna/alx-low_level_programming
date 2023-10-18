#include "main.h"

/**
 * string_toupper - uppercase string
 * @str: string in question
 *
 * Return: pointer to given string (char *)
 */
char *string_toupper(char *str)
{
	const int diff = 'a' - 'A';

	char *root = str;

	while (*str != '\0')
	{
		if (('a' <= *str) && (*str <= 'z'))
			*str -= diff;
		str++;
	}

	str = root;

	return (str);
}
