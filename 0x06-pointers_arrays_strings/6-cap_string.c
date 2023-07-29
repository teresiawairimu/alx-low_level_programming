#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: function parameter
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int m = 1;

	while (*str)
	{
		if (m && ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= ('a' - 'A');
			}
			m = 0;
		}
		else if (*str == ' ' ||
			*str == '\t' ||
			*str == '\n' ||
			*str == ',' ||
			*str == ';' ||
			*str == '.' ||
			*str == '!' ||
			*str == '?' ||
			*str == '"' ||
			*str == '(' ||
			*str == ')' ||
			*str == '{' ||
			*str == '}')
		{
			m = 1;
		}
		else if (*str >= '0' && *str <= '9')
		{
			m = 0;
		}
		str++;
	}
	return (str);
}
