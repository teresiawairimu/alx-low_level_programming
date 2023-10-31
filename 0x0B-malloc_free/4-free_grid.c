#include "main.h"

/**
 * free_grid - Deallocates memory for a 2D array.
 * @grid: The memory block to be released.
 * @height: The height of the array.
 *
 * Return: This function returns void.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

