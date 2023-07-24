#include "main.h"

/**
 * rev_string - reverses a string
 * @s: function parameter
 */
void rev_string(char *s)
{
	int n = 0;
	int m;
	char t;

	while (s[n] != '\0')
	{
		n++;
	}
	for (m = 0; m < n / 2; m++)
	{
		t = s[m];
		s[m] = s[n - m - 1];
		s[n - m - 1] = t;
	}
}
