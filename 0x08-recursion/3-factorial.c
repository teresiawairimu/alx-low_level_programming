#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 *
 * Return: the factorial
 * if n is lower than 0 return -1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
