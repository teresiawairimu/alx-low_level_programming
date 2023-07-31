#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string where the character is located
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character
 * of NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

