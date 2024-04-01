#include "main.h"

/**
 * _strpbrk - first char in parent where a char in child appears
 * @s: parent string
 * @accept: child string
 *
 * Return: pointer to first occurance (char *)
 */
char *_strpbrk(char *s, char *accept)
{
	int iter;

	while (*s)
	{
		for (iter = 0; accept[iter]; iter++)
			if (*s == accept[iter])
				return (s);
		s++;
	}

	return (NULL);
}
