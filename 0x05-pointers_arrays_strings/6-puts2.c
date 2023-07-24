#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: function parameter
 */
void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m = m + 2;
	}
	_putchar('\n');
}
