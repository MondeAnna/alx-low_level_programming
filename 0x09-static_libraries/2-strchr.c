#include "main.h"

/**
 * _strchr - find char in str else null
 * @s: string
 * @c: char
 *
 * Description: null byte included
 *
 * Return: pointer to char if found, else null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	return (*s == c ? s : NULL);
}
