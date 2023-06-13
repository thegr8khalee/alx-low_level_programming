#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2d array grid
 * @height: height of 2d array
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
