#include <unistd.h>

/**
 * _putchar - _putchar writes character c to standard output
 * @c: the character that's written to standard output
 *
 * Return: 1 (Success) On error, returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
