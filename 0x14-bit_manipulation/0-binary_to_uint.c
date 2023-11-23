#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number represented as a string to an unsigned int.
 * @b: String containing the binary number.
 * Return: The unsigned int representation of the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num_converted = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num_converted = 2 * num_converted + (b[i] - '0');
	}
	return (num_converted);
}
