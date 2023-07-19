#include "main.h"

/**
 * print_alphabet - function to print the alphabet, in lowercase.
 *
 * _putchar - writes a character to the standard output.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
