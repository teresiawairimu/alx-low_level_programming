#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - _putchar writes character c to standard output
 *
 * Return: 1 (Success)
 * On error, returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
