#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 *
 * @width: The number of columns in the 2D array.
 *
 * @height: The number of rows in the 2D array.
 *
 * Return: A pointer to a 2D array of integers, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
    int i, j;
    int **alloc_mem;

    if (width <= 0 || height <= 0)
        return NULL;

    alloc_mem = (int **)malloc(sizeof(int *) * height);

    if (alloc_mem == NULL)
    {
        free(alloc_mem);
        return NULL;
    }

    for (i = 0; i < height; i++)
    {
        alloc_mem[i] = (int *)malloc(sizeof(int) * width);

        if (alloc_mem[i] == NULL)
        {
            for (j = i; j >= 0; j--)
                free(alloc_mem[j);

            free(alloc_mem);
            return NULL;
        }

        for (j = 0; j < width; j++)
            alloc_mem[i][j] = 0;
    }

    return alloc_mem;
}
