#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: determines the size of the array
 * @c: the specific character to be initialized
 *
 * Return: pointer to the array, NULL if it fails, NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *array;

	if (size == 0)
		return ('\0');

	array = malloc(size);

	if (array == NULL)
		return ('\0');

	for (j = 0; j < size; j++)
		array[j] = c;
	return (array);
}
