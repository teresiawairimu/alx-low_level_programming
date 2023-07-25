#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * n is the number of elements of the array to be printed
 * numbers must be separated by a comma, followed by a space
 * numbers should be displayed in the same order as in the array
 * @a: function parameter
 * @n: function parameter
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
