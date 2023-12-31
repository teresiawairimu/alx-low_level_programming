#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: function parameter
 * where n is the number of times the character \ should be printed
 * the diagonal should end with a \n
 * if n is 0 or less, the function should only print \n
 */
void print_diagonal(int n)
{
	int m, t;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (t = 0; t < m; t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
