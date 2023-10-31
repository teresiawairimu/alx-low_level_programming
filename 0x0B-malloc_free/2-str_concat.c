#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first input string
 * @s2: the second input string
 *
 * Return: pointer to newly allocated memory with s1, s2, and null terminated
 * NULL on failure
 * if NULL is passed, treat as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int j, i;
	int length_s1 = 0;
	int length_s2 = 0;
	char *new_mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + length_s1) != '\0')
		length_s1++;
	while (*(s2 + length_s2) != '\0')
		length_s2++;
	new_mem = malloc(1 + (length_s1 * sizeof(*s1)) + (length_s2 * sizeof(*s2)));
	if (new_mem == NULL)
		return ('\0');
	for (j = 0; j < length_s1; j++)
		new_mem[j] = *(s1 + j);
	for (i = 0; i < length_s2; i++, j++)
		new_mem[j] = *(s2 + i);
	return (new_mem);
}
