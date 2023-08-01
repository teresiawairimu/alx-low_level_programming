#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: function parameter
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;
	char *original_accept = accept;

	while (*s != '\0')
	{
		m = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				m = 1;
				break;
			}
			accept++;
		}
		if (!m)
		{
			break;
		}
		n++;
		s++;
		accept = original_accept;
	}
	return (n);
}
