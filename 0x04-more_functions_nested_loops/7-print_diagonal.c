#include "main.h"

/**
 * print_diagonal - show diagonal line
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	const int ZERO = 0;
	int col, row;

	if (n <= ZERO)
	{
		_putchar('\n');
		return;
	}

	for (row = ZERO; row < n; row++)
	{
		for (col = ZERO; col < row; col++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
