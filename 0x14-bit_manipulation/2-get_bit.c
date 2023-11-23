#include "main.h"

/**
 * get_bit - Get the value of a bit at a specific position.
 * @n: Number to extract the bit from.
 * @index: Position of the bit to retrieve.
 * Description: Returns the value of a bit at the specified position.
 * Header: holberton.h
 * Return: The bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
