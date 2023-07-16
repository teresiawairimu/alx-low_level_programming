#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int printNumbers = 0;
	char letter = 'a';

	while (printNumbers < 10)
	{
		putchar('0' + printNumbers);
		printNumbers++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
