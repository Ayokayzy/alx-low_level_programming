#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the 2-dimentional array of integers
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int idx;

	if (grid == NULL || height == 0)
		return;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
