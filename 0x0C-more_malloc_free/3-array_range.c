#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array with values from min to max
 * ordered from min to max
 * @min: contains the elements for the array
 * @max: cntains elements for the array
 *
 * Return: pointer to the created array
 * NULL if min > max
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int array_size;
	int *new_mem;
	int j;

	if (min > max)
		return (NULL);
	array_size = max - min + 1;
	new_mem = malloc(sizeof(int) * array_size);
	if (new_mem == NULL)
		return (NULL);
	for (j = 0; j < array_size; j++)
	{
		new_mem[j] = min + j;
	}
	return (new_mem);
}
