#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: it is the function parameter
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
