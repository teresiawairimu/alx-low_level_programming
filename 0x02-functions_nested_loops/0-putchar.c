#include "main.h"

/**
 * main- Entry point
 *
 * Description - prints _putchar
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int m:
	
	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
	return (0);
}
