#include "main.h"

/**
 * alloc_grid - dynamically allocate memory to 2-d array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2-d array (char **)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *ptr;
	int row;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(ptr) * height);

	if (!grid)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(width) * width);

		if (!grid[row])
		{
			while (row--)
				free(grid[row]);

			free(grid);

			return (NULL);
		}
	}

	return (grid);
}
