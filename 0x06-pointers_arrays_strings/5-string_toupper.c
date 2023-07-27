#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: function parameter
 *
 * Return: string written in uppercase
 */
char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - ('a' - 'A');
		}
		n++;
	}
	return (str);
}
