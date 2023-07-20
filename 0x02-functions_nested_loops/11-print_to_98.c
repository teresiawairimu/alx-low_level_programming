#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * numbers must be separated by a comma, followed by a space
 * numbers should be printed in order
 * the first printed number should be the number passed to your function
 * the last printed number should be 98
 * @n: is the argument that is passed
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("%d\n", n);
}
