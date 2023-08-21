#include "main.h"

/**
 * swap_int - swap two values
 * @a: left operand
 * @b: right operand
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
