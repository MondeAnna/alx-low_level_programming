#include "main.h"

/**
 * free_grid - free dynamically allocated 2-d array
 * @grid: 2-d array
 * @height: n of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
