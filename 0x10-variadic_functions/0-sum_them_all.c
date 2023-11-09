#include <stdarg.h>
#include <stdio.h>

/**
* addUpParameters - computes the sum of all input values
* @n: the total count of parameters
* Return: the sum of the parameter values
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (sum);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
