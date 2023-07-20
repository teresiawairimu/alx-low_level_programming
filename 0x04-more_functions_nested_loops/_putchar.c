#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 *
 * Return: 1 (Success)
 * On error, returns -1
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
