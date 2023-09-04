#include <stdio.h>
#include <stdlib.h>

/**
 * main -Function that prints minimum number of coins to make change for an amount of money
 * @argc: Denotes the number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: (0) if no errors, else (1)
 */

int main(int argc, char *argv[])
{
	int z, n = 0, i, t;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	z = atoi(argv[1]);
	if (z <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = z / c[i];
			z -= t * c[i];
			n += t;
			if (z == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
