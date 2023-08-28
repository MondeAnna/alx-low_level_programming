#include "main.h"

/**
 * create_array - array with dynamically allocated memory
 * @size: array size
 * @c: value to initialise with
 *
 * Return: char initialised array
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (!size)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (!a)
		return (NULL);

	while (size--)
		a[size] = c;

	return (a);
}
