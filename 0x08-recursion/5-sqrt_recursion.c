#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * _sqrt_helper - find the natural square root of a number
 * @i: function parameter
 * Return: the natural square root of a number
 * if n does not have a natural square root return -1
 */
int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - find the natural square root of a number
 * @i: function parameter
 * @n: the number
 *
 * Return: the natural square root of a number
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
