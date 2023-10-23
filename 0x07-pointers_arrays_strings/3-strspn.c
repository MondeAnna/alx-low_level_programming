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

/**
 * exec - testing entry point
 *
 * Return: void
 */
void exec(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("\n`oleh`:\t%u\n", n);

	n = _strspn(s, "\0");
	printf("`\\0`:\t%u\n", n);

	n = _strspn("", "");
	printf("`Empty`:\t%u\n", n);

	n = _strspn("hello, world", "eow");
	printf("`Empty`:\t%u\n", n);
}
