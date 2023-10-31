#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string, a duplicate of the input string
 * @str: the input string
 *
 * Return: NULL is str is NULL, success if a pointer to the duplicate string
 * and NULL if insufficient memory is available
 */
char *_strdup(char *str)
{
	int j;
	int length = 0;
	char *duplicate_string;

	if (str == NULL)
		return (NULL);

	while (*(str + length) != '\0')
		length++;
	length++;
	duplicate_string = malloc(sizeof(*str) * length);

	if (duplicate_string == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
	{
		duplicate_string[j] = *(str + j);
	}
	duplicate_string[j] = '\0';
	return (duplicate_string);
}
