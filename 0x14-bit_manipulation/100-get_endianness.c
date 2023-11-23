#include "main.h"

/**
 * get_endianness - Get the endianness of the architecture.
 * Description: Returns 1 for little endian, 0 for big endian.
 * Header: holberton.h
 * Return: Endianness indicator.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
