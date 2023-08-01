#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: function parameter
 * @size: function parameter
 */
void print_diagsums(int *a, int size)
{
	int n = 0;
	int m = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		n = n + a[i * size + i];
		m = m + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", n, m);
}
