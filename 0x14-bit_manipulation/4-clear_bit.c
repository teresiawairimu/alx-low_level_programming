#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Set a bit to 0 at a specified index.
 * @n: Value to modify.
 * @index: Bit position.
 * Return: 1 on success, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
