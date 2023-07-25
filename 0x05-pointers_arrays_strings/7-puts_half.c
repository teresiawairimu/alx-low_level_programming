#include "main.h"

/**
 * puts_half - prints half a string
 * followed by a new line
 * print the second half of the string
 * if the number is odd,
 * the function should print the last n characters of the string
 * @str: function parameter
 */
int _strlen(char *str)
{
	int m;

	for (m = 0; *(str + m) != '\0'; m++)
	{
		m++;
	}
	return (m);
}
void puts_half(char *str)
{
	int n;
	int len = _strlen(str);

	for (n = ((len - 1) / 2) + 1; n < len; n++)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
