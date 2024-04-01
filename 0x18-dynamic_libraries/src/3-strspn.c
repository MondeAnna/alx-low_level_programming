#include "main.h"

/**
 * _strspn - find n chars to cover secondary string
 * @s: string
 * @accept: quasi-unique chars
 *
 * Return: count of equal chars (unsigned int)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int iter = 0;
	char *a = accept;

	for (; s[iter]; iter++)
	{
		for (; *a; a++)
			if (*a && (*a == s[iter]))
			{
				a = accept;
				break;
			}

		if (!(*a))
			return (iter);
	}


	return (iter);
}
