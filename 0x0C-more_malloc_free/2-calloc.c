#include "main.h"

/**
 * _calloc - create dynamically allocated array
 * @nmemb: element count
 * @size: element size
 *
 * Return: address to array (void *)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;

	if (!nmemb || !size)
		return (NULL);

	a = calloc(size, nmemb);

	if (!a)
		return (NULL);

	return ((void *) a);
}
