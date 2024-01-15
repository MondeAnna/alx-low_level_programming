#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	short int i = 0;

	while (*s++)
		i++;

	return (i);
}
