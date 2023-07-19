#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 *
 * _putchar - writes a character to the standard output.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
