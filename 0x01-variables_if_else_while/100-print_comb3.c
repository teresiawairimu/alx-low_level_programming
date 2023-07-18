#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints al, possible combinations of two digits
 * numbers must be separated by , followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits
 * print only the smallest combination of two digits
 * numbers should be printed in ascending order, with two digits
 * you can only use the putchar function
 * you can only use the putchar five times maximum in your code
 * you are not allowed to use any variable of type char
 * all your code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inner;
	int outer;

	for (outer = 48; outer <= 57; outer++)
	{
		for (inner = 48; inner <= 57; inner++)
		{
			if (outer != inner)
			{
				if (outer != 49 || inner != 48)
				{
					putchar(outer);
					putchar(inner);
					if (outer + inner < 144)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
