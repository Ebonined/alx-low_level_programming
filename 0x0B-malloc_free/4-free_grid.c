#include <stdlib.h>

/**
 * free_grid - frees previously created grid
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height <= 0)
		return;
	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
