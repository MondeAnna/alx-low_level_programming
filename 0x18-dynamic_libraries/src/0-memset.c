#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: memory area
 * @b: byte
 * @n: memory area size
 *
 * Description: call within `main` in order for
 * exercise to work
 *
 * Return: pointer to memory area (char *)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s[n] = b;
	return (s);
}
