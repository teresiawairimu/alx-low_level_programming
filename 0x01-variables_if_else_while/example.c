#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: Success
 */
int main(void)
{
	char c;

	c = CHAR_MIN;
	while(c != CHAR_MIN)
	{
		printf("%d\n", c);
	}

	exit(EXIT_SUCCESS);
}
