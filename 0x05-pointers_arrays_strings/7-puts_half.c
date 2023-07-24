#include "main.h"

/**
 * puts_half - prints half a string
 * followed by a new line
 * print the second half of the string
 * if the number is odd,
 * the function should print the last n characters of the string
 * @str: function parameter
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
