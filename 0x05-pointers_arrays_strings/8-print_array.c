#include "main.h"

/**
 * print_array - show `n` elements in array
 * @a: the array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	while (n > 0)
		if (--n)
			printf("%d, ", *a++);
		else
			printf("%d", *a++);

	putchar('\n');
}
