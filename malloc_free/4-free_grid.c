#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: pointer to grid
 * @height: height of grid
 * Return: nothing/ void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
	grid = NULL;
}
