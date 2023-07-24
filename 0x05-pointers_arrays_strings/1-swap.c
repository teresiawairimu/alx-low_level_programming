#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: function parameter
 * @b: function parameter
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
