#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer that points to the newly allocated memory
 * it contains contents of s1 and s2
 * Also return Null omn failure
 * if Null is passed, treat it as an emty string
 */
char *str_concat(char *s1, char *s2)
{

	unsigned int n;
	unsigned int j;
	char *new_mem;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}
	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}
	new_mem = malloc(1 + (length_s1 * sizeof(*s1)) + (length_s2 * sizeof(*s2)));
	if (new_mem == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < length_s1; n++)
	{
		new_mem[n] = *(s1 + n);
	}

	for (j = 0; j < length_s2; j++, n++)
	{
		new_mem[n] = *(s2 + j);
	}
	return (new_mem);
}
