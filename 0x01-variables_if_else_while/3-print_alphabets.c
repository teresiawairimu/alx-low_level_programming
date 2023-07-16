#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print the alphabet in lowercase and then in uppercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char letterCaps = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letterCaps <= 'Z')
	{
		putchar(letterCaps);
		letterCaps++;
	}
	putchar('\n');
	return (0);
}
