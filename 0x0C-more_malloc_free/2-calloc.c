#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array of nmemb elements of size bytes each
 * @nmemb: elements of the array
 * @size: used to alocate memory
 *
 * Return: a pointer to the allocated memory
 * if nmemb or size is 0, then return NULL
 * if it fails then return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *s;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
	{
		s[j] = 0;
	}
	return ((void *)s);
}
