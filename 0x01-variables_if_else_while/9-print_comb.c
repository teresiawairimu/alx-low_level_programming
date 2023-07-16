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
	int printNumbers;

	for (printNumbers = 0; printNumbers < 10; printNumbers++)
	{
		putchar('0' + printNumbers);
		if (printNumbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
