#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array 
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: the char value to initialize the array
 *
 * Return: Null if size is 0 or a pointer to an array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr1;
	unsigned int n;

	if (size == 0)
	{
		return NULL;
	}

	arr1 = malloc(size);

	if (arr1 == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		arr1[n] = c;
	}

	return (arr1);
}
	
