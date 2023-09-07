#include <stdio.h>

/**
* main - points out all arguments that  it receives
* @argc: Denotes the number of argumments passed to the function
* @argv: This is the arguments pointers to string
* Return: always (0)
*/

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
