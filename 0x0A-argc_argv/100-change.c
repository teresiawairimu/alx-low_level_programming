#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the number of arguments passed
 * @argv: the one-dimensional array
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, cents, number_of_coins, count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (1);
		}
		number_of_coins = sizeof(coins) / sizeof(coins[0]);
		count = 0;
		for (i = 0; i < number_of_coins; i++)
		{
			while (cents >= coins[i])
			{
				cents -= coins[i];
				count++;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
