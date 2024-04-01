#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory
 * @src: source memory
 * @n: memory size to copy
 *
 * Description: project does not seem to be bothered
 * with checking for memory overlap due to declaring
 * dest and src with explicity memory sizes
 *
 * Return: destination memory (char *)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}
