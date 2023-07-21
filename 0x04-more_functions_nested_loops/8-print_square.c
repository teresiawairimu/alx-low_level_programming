#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * if size is 0 or less, the function should print a new line
 * use # to print the square
 */
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
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
