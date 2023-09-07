#include <stdio.h>

/**
 * main - prints the number of arguments that are passed to it 
 * @argc: Denotes the number of arguments passed to it
 *@argv: The argument vector of pointers to string
 * Return: always (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -1);
	return (0);
}
