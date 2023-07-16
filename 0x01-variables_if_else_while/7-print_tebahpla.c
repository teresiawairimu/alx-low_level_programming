#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the lowercase alphabet in reverse
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letterRev = 'z';

	while (letterRev >= 'a')
	{
		putchar(letterRev);
		letterRev--;
	}
	putchar('\n');
	return (0);
}
