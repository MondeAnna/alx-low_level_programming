#include "main.h"

/**
 * _strcpy - coput string to new memory block
 * @dest: destination
 * @src: source
 *
 * Return: copied string (char *)
 */
char *_strcpy(char *dest, char *src)
{
	char *begin = dest;

	while (*src)
		*begin++ = *src++;

	*begin = *src;

	return (dest);
}
