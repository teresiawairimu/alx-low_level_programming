#include <unistd.h>
/**
 * _putchar - writes c character to standard output
 *
 * Return: 1 (Success)
 * on error return -1
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
