#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints all possible combinations of single-digit numbers
 * numbers must be separated by ,, followed by a space
 * numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int outer;
	int inner;

	for (outer = 0; outer < 10; outer++)
	{
		for (inner = outer; inner < 10; inner++)
		{
			putchar('0' + outer);
			putchar('0' + inner);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
