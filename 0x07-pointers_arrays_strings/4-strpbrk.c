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

/**
 * exec - test entry point
 *
 * Return: void
 **/
void exec(void)
{
	char *s = "this is a string";
	char *sub_a = "str";
	char *sub_b = "round";
	char *r;

	/* expect all of `s` */
	r = _strpbrk(s, sub_a);
	printf("\n%s\n", r);

	/* expect `ring` */
	r = _strpbrk(s, sub_b);
	printf("%s\n", r);
}
