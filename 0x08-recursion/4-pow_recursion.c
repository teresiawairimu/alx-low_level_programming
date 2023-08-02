#include "main.h"

/**
 * _pow_recursion - returns the value of x raise t the power of y
 * @x: the number to be raised to the power of y
 * @y: the power of
 *
 * Return: the value of x raised to the power of y
 * if y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
