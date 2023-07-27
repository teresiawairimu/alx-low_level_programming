#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: function parameter
 *
 * Return: the capitalized string
 */
int not_alphabet(char c)
{
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch || ch + 32)
		{
			return (0);
		}
	}
	for (ch = '0'; ch <= '9'; ch++)
	{
		if (c == ch)
		{
			return (0);
		}
	}
	return (1);
}
char *cap_string(char *str)
{
	int n = 0;
	if (str[n] >= 'a' && str[n] <= 'z')
	{
		str[n] = str[n] - ('a' - 'A');
	}
	n++;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			if (not_alphabet(str[n - 1]))
			{
				str[n] = str[n] - ('a' - 'A');
			}
		}
		n++;
	}
	return (str);
}
