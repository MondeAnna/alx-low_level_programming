#include "main.h"

/**
 * print_triangle - show right-angled truangle
 * @size: dimension of base and height
 *
 * Return: void
 */
void print_triangle(int size)
{
	int col, row, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		spaces = size - row;
		col = size - spaces;

		for (; spaces; spaces--)
			_putchar(' ');

		for (; col; col--)
			_putchar('#');

		_putchar('\n');
	}
}
