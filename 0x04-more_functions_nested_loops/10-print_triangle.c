#include "main.h"

/**
 * print_triangle - prints a triangle 
 * followed by a new line
 * @size: function parameter
 * size is the size of the trangle
 * if size is 0 or less. print only a new line
 * use character # to print the triangle
 */
void print_triangle(int size)
{
	int n, m;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= n; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
