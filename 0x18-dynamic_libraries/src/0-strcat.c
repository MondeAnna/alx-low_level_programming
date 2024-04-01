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

	while (*root != '\0')
		root++;

	while (*src != '\0')
		*root++ = *src++;

	*root = *src;

	return (dest);
}
