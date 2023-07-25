#include "main.h"

/**
 * puts_half - prints half a string
 * followed by a new line
 * print the second half of the string
 * if characters is odd, print the last n characters of the string
 * @str: function parameter
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			break;
		}
		len++;
	}
	if (len % 2 == 1)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (n++; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
