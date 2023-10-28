#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of multiplying two numbers
 * @argc: the number of arguments passed to the program
 * @argv: the one-dimensional array of strings given as input
 *
 * Return: success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1];
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
