#include "main.h"

/**
 * print_number - prints an integer
 * only use _putchar function
 *
 * not allowed to use arrays or pointers
 * not allowed to hard-code special values
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
