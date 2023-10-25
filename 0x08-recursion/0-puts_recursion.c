#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the pointer points to the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
