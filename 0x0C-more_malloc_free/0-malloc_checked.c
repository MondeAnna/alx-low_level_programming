#include "main.h"

/**
 * malloc_checked - ensure malloc operated as expected
 * @b: buffer size
 *
 * Return: pointer to new buffer (void *) else exit
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
