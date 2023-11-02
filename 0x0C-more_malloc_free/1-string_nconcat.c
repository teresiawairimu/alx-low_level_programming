#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the string to be concatenated
 * @s2: the other string to be concatenated
 * @n: the bytes that determines the length of s2 to be concatenated
 *
 * Return: pointer to the newly allocated memory
 * containing s1, first n bytes of s2
 * on failure return NULL
 * if n is greater or equal to length of s2 return s2
 * if NULL is passed treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int j, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + length_s1) != '\0')
		length_s1++;
	while (*(s2 + length_s2) != '\0')
		length_s2++;
	if (length_s2 > n)
		length_s2 = n;
	ptr = malloc(sizeof(char) * (length_s1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < length_s1; j++)
		ptr[j] = *(s1 + j);
	for (i = 0; i < length_s2; i++, j++)
		ptr[j] = *(s2 + i);
	return (ptr);
}
