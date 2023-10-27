#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments passed to the program
 * @argv: a one-dimensional array of strings
 *
 * Return: the number of arguments
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
