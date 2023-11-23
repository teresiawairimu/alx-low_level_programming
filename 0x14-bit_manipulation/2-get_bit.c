#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given position.
 * @n: The number to extract the bit from.
 * @index: The position of the bit to be retrieved.
 *
 * Description: This function returns the value of a bit at a specified position.
 * Header: holberton.h
 *
 * Return: The value of the requested bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
