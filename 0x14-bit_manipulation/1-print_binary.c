#include "main.h"
/**
 * print_binary - Converts a decimal to binary without using / and %.
 * @n: Decimal number to convert.
 * Description: This function converts a decimal to binary.
 * Header: holberton.h
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1;

	mask <<= 63;
	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		mask = mask >> 1;
	}
}
