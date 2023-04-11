#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2-D grid
 * @grid: Grid
 * @height: Height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
