#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string containing the bytes to be searched
 *
 * Return: a pointer yo the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
