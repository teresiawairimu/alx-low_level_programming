#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the input integer
 *
 * Return: 1 if the input integer is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	int divisor = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, divisor));
}

/**
 * is_prime - determines whether the given number is prime
 * @n: the given number
 * @divisor: the divisor being checked
 *
 * Return: 1 if the number is a prime number and 0 if it is not
 */
int is_prime(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (is_prime(n, divisor - 1));
}
