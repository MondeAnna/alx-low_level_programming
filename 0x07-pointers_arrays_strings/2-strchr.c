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

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	char *h = "hello";
	char *r;

	r = _strchr(h, 'l');
	printf("\nReturned Char:\t%s\n", r);
	printf("Returned Add:\t%p\n", r);

	r = _strchr(h, 'x');
	printf("\nReturned Char:\t%s\n", r);
	printf("Returned Add:\t%p\n", r);

	r = _strchr(h, '\0');
	printf("\nReturned Char:\t%s\n", r);
	printf("Returned Add:\t%p\n", r);
}
