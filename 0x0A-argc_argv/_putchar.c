#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to standard output
 * @c: input integer
 *
 * Return: 1 on Success and 0 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
