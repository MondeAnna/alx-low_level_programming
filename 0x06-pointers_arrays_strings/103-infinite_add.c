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

	while (*s++ != '\0')
		i++;

	return (i);
}

/**
 * infinite_add - add ad nauseam
 * @n1: left operand
 * @n2: right operand
 * @r: storage buffer
 * @size_r: size of buffer
 *
 * Return: sum (char *)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = _strlen(n1), len_n2 = _strlen(n2);
	int *len_long = len_n1 >= len_n2 ? &len_n1 : &len_n2;
	int *len_short = len_n1 < len_n2 ? &len_n1 : &len_n2;
	int len_r = *len_long + 1;

	int carry = 0, sum = 0, units = 0;
	char left = '0', right = '0';

	char *nlong, *nshort;

	r[len_r] = '\0';

	nlong = n1[*len_long] == '\0' ? n1 : n2;
	nshort = n2[*len_long] == '\0' ? n2 : n1;

	while (*len_long)
	{
		*len_long -= 1;
		*len_short -= 1;
		len_r -= 1;

		left = nlong[*len_long] - '0';
		right = *len_short >= 0 ? nshort[*len_short] - '0' : 0;

		sum = left + right + carry;
		units = sum % 10;
		carry = sum / 10;

		r[len_r] = '0' + units;
	}

	r[0] = '0' + carry;

	if (_strlen(r) >= size_r)
		return (0);

	return (r);
}
