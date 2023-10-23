#include "main.h"

/**
 * print_chessboard - show chessboard
 * @a: board with dimenstion 8x8
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	const int dim = 8;
	char *cell = *a;
	int iter;

	for (iter = 0; iter < dim * dim; iter++)
	{
		if (iter && !(iter % dim))
			_putchar('\n');

		_putchar(cell[iter]);
	}

	_putchar('\n');
}

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	print_chessboard(board);
}
