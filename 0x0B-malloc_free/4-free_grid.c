#include "main.h"
/**
 * free_grid - frees 2 dimentional grid.
 * @grid: result parameter.
 * @height: one dimention parameter.
 * Return: Always 0 sucess.
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
