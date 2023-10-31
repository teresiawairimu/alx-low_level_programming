#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: the input character
 *
 * Return: 1(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
