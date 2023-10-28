#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: the number of arguments passed to the program
 * @argv: one-dimensional array of strings given as input
 *
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	int i, j, total, num;
	char *inputString;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		total = 0;
		for (i = 1; i < argc; i++)
		{
			inputString = argv[i];
			for (j = 0; inputString[j] != '\0'; j++)
			{
				if (!isdigit(inputString[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(inputString);
			total += num;
		}
		printf("%d\n", total);
	}
	return (0);
}
