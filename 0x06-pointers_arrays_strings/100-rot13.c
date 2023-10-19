#include "main.h"

/**
 * _islwr - discern if char is lowercase
 * @c: char in question
 *
 * Return: 0 if False
 * 1 if True
 *
 */
int _islwr(const char *c)
{
	return (('a' <= *c) && (*c <= 'z'));
}

/**
 * _isuppr - discern if char is uppercase
 * @c: char in question
 *
 * Return: 0 if False
 *         1 if True
 *
 */
int _isuppr(const char *c)
{
	return (('A' <= *c) && (*c <= 'Z'));
}

/**
 * _rotate - apply 13 char rotation
 * @c: char in question
 *
 * Return: void
 *
 */
void _rotate(char *c)
{
	char first_letter;
	int shift;

	if (*c <= 'Z')
		first_letter = 'A';
	else
		first_letter = 'a';

	shift = *c % first_letter + 13;
	shift %= 26;
	shift += first_letter;

	*c = shift;
}

/**
 * rot13 - encode string using rot13
 * @str: string in question
 *
 * Return: encoded string (char *)
 *
 */
char *rot13(char *str)
{
	char *root = str;

	while (*str != '\0')
	{
		while (_islwr(str) || _isuppr(str))
		{
			/* unary increment in order to exit loop */
			_rotate(str++);
			continue;
		}

		str++;
	}

	str = root;

	return (str);
}
