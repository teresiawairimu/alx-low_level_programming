#include <stdio.h>
#include "search_algos.h"

/**
 * print_search_array - prints array being searched
 * @array: pointer to the first element of the array
 * @left:left index of the array
 * @right: right index of the array
 * Return: the current array being searched
 */
void print_search_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - use binary search algorithm
 * @array: pointer to the firat element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located, or -1 if array is NULL,
 * or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid_section;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_search_array(array, left, right);
		mid_section = left + (right - left) / 2;
		if (array[mid_section] == value)
		{
			return (mid_section);
		}
		else if (array[mid_section] < value)
		{
			left = mid_section + 1;
		}
		else
		{
			right = mid_section - 1;
		}
	}
	return (-1);
}

