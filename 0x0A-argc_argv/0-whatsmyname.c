#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments passed to the program
 * @argv: a one-dimensional array of strings
 *
 * Return: success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
