#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * you can only use if statement once
 * you can only use two loops
 * you are not allowed to use switch
 * you cannot use any ternary operation
 * @str: function parameter
 *
 * Return: encoded string's pointer
 */
char *rot13(char *str)
{
	char *n = str;
	char m;

	while (*n)
	{
		m = *n;
		if ((*n >= 'A' && *n <= 'Z'))
		{
			m = ((*n - 'A' + 13) % 26) + 'A';
		}
		else if ((*n >= 'a' && *n <= 'z'))
		{
			m = ((*n - 'a' + 13) % 26) + 'a';
		}
		*n = m;
		n++;
	}
	return (str);
}
