#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
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
