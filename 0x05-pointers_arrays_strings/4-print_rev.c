#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: function parameter
 */
void print_rev(char *s)
{
	int n = 0;
	int m;

	while (s[n] != '\0')
	{
		n++;
	}

	for (m = n - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
