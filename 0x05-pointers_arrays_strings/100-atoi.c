#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: function parameter
 * Return: 0;
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int m = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			n *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			m = m * 10 + (*s - '0');
		}
		else if (m > 0)
		{
			break;
		}
		s++;
	}
	return (m * n);
}
