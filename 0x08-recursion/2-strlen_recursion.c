#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length is returned
 *
 * Return: integer value that indicates the length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
	return (length);
}

