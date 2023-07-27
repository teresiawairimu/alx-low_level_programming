#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: function parameter
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int m;

	/*swap the characters*/
	while (start < end)
	{
		m = a[start];
		a[start] = a[end];
		a[end] = m;
		start++;
		end--;
	}
}
