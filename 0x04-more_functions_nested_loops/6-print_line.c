#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: function parameter that indicates the
 * number of times the character_ should be printed
 * The line should end with \n
 * if n is 0 or less, print only \n
 */
void print_line(int n)
{
	int m;

	for (m = 1; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
