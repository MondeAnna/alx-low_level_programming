#include "main.h"

/**
 * swap - swap two values
 * @a: left operand
 * @b: right operand
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverse values in array
 * @a: array in question
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *left, *right;
	int end = n - 1;
	int start = 0;

	while (start < end)
	{
		left = &a[start++];
		right = &a[end--];

		swap(left, right);
	}
}
