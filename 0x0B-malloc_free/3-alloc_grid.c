#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2 dimensional array of integers
 * or NULL on failure
 * if width or height is 0 or negative return NULL
 */
int **alloc_grid(int width, int height)
{
	int **new_mem;
	int n, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	new_mem = malloc(height * sizeof(int *));
	if (new_mem == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		new_mem[n] = malloc(width * sizeof(int *));
		if (new_mem[n] == NULL)
		{
			for (j = 0; j < n; j++)
			{
				free(new_mem[j]);
			}
			free(new_mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			new_mem[n][j] = 0;
		}
	}
	return (new_mem);
}



