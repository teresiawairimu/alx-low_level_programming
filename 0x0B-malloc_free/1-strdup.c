#include "main.h"
#include <stdlib.h>

/**
 * 
 * _strdup - returns a pointer to a newly allocated memory space
 * the memory contains a copy of the string given as a parameter
 * @str: the string to be duplicated
 * Return: NULL if str is NULL
 * or a pointer to the duplicated string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	size_t length_of_string = 0;
	char *new_mem;
	unsigned int n;

	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	new_mem = malloc(length_of_string * sizeof(*str));

	if (new_mem == NULL)
	{
		return (NULL);
	}
	
	for (n = 0; n < length_of_string; n++)
	{
		new_mem[n] = *(str + n);
	}
	
	return (new_mem);
}
	

