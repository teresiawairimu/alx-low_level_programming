#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number whose square root is to be determined
 *
 * Return: square root and -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, 1));
}

/**
 * _sqrt - returns square root of a number
 * @n: the number for which to find the square root
 * @g: the current guess for the square root
 *
 * Return: square root of n
 */
int _sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (_sqrt(n, g + 1));
}
