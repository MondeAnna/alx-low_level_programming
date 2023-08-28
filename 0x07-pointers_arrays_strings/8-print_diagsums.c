#include "main.h"

/**
 * print_diagsums - show sum of diagonals
 * of square matrix
 *
 * @a: matrix
 * @size: size of one side of square
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_f = 0, sum_s = 0;
	int s = (size * size) - size;
	int f = 0;

	for (; f < size * size; f += size + 1)
		sum_f += a[f];

	for (; s; s -= size - 1)
		sum_s += a[s];

	printf("%d, %d\n", sum_f, sum_s);
}

/**
 * exec -test entry point
 *
 * Return: void
 */
void exec(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};

	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};

	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
}
