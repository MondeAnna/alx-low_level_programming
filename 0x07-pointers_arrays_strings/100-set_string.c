#include "main.h"

/**
 * set_string - set value of pointer to a char
 * @s: double pointer to char
 * @to: single pointer to char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("\nOriginal s0:\t%s\n", s0);
	printf("Original s1:\t%s\n", s1);

	set_string(&s1, s0);

	printf("\nAfter Call s0:\t%s\n", s0);
	printf("After Call s1:\t%s\n", s1);
}
